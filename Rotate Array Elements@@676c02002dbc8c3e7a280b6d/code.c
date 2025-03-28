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

// Function to print the array with correct formatting
void printArray(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);  // Print each element on a new line
    }
}

// Main function
int main() {
    int N, K;
    
    // Taking input for array size
    scanf("%d", &N);

    int arr[N];

    // Taking input for array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking input for rotation count
    scanf("%d", &K);

    // Rotate the array
    rotateArray(arr, N, K);

    // Print the rotated array in the expected format
    printArray(arr, N);

    return 0;
}


