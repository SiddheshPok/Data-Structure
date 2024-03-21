#include <stdio.h>

void printArray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int partition(int a[], int low, int high) {
    int pivot = a[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (a[i] <= pivot ) {
            i++;
        }
        while (a[j] > pivot ) {
            j--;
        }
        if (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quicksort(int a[], int low, int high) {
    if (low < high) {
        int partitionindex = partition(a, low, high);
        quicksort(a, low, partitionindex - 1);
        quicksort(a, partitionindex + 1, high);
    }
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter the array element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
     printf("Original array: ");
    printArray(a, n);
    quicksort(a, 0, n - 1);
    printf("Sorted array: ");
    printArray(a, n);
    return 0;
}
