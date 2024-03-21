#include<stdio.h>

void printArray(int *a, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void merge(int a[], int mid, int low, int high) {
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }
    while (i <= mid) {
        b[k++] = a[i++];
    }
    while (j <= high) {
        b[k++] = a[j++];
    }
    for (i = low; i <= high; i++) {
        a[i] = b[i];
    }
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, mid, low, high);
    }
}

int main() {
    int a[] = {40,25,45,7,9,80,12};
int n = 7;
printf("Original array: ");
printArray(a, n);
mergeSort(a, 0, n - 1);
printf("Sorted array: ");
printArray(a, n);
return 0;
}
