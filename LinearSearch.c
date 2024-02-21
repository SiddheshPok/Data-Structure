#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[],int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // If key is found, return the index
        }
    }
    return -1; // If key is not found, return -1
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the  %d elements of the array:\n ",size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
   

    int key;
    printf("Enter the key to be searched: ");
    scanf("%d", &key);

    int result = linearSearch(arr,size,key);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
