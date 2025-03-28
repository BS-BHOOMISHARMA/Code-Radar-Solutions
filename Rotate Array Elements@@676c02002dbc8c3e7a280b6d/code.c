#include <stdio.h>

// Function to rotate the array to the right by K positions
void rotateArray(int arr[], int N, int K) {
    K = K % N;  // Handle cases where K > N

    for (int i = 0; i < K; i++) { // Repeat K times
        int temp = arr[N - 1];  // Store last element
        for (int j = N - 1; j > 0; j--) {  // Shift elements to the right
            arr[j] = arr[j - 1];
        }
        arr[0] = temp; // Place last element at the front
    }
}

// Function to print the array
void printArray(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int N, K;

    scanf("%d", &N);

    int arr[N];

    // Taking input for array elements
    printf("%d", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &K);
    rotateArray(arr, N, K);
    printArray(arr, N);

    return 0;
}

