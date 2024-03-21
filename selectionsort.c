#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
  
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
  
        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
      int n;
    printf("Enter the size of the array :" );
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array : \n");
    for (int i = 0; i < n; i++) {
        printf("Enter the  element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
