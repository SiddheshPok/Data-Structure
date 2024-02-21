#include <stdio.h>

int binarySearch(int a[], int low, int high, int key) {
    if (low <= high) {
        // Calculate middle index
        int mid = low + (high - low) / 2;

        // If the key is present at the middle
        if (a[mid] == key)
            return mid;

        // If the key is smaller than the middle, search in the left subarray
        if (a[mid] > key)
            return binarySearch(a, low, mid - 1, key);

        // If the key is larger than the middle, search in the right subarray
        return binarySearch(a, mid + 1, high, key);
    }

    // Key not present in the array
    return -1;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Get array elements from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the key to be searched: ");
    scanf("%d", &key);

    // Perform binary search
    int result = binarySearch(arr, 0, n - 1, key);

    // Display the result
    if (result == -1)
        printf("Element %d is not present in the array.\n", key);
    else
        printf("Element %d is present at index %d.\n", key, result);

    return 0;
}
