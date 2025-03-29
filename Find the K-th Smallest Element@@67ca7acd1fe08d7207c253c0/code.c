#include <stdio.h>

// Function to sort the array using the Selection Sort algorithm
void selectionSort(int arr[], int n) {
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

// Function to find the Kth smallest element in the array
int kthSmallest(int arr[], int n, int k) {
    // Sort the array
    selectionSort(arr, n);
    // Return the Kth smallest element (1-based index)
    return arr[k - 1];
}

