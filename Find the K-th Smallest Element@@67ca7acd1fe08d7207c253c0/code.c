#include <stdio.h>

void selectionSort(int arr[], int n) {
    // Sort the array using Selection Sort algorithm
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap the minimum element with the first unsorted element
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int kthSmallest(int arr[], int n, int k) {
    // Use selectionSort to sort the array
    selectionSort(arr, n);
    // Return the Kth smallest element (1-based index)
    return arr[k - 1];
}