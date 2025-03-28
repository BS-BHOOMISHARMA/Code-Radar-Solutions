/void rotateArray(int arr[], int N, int K) {
    K = K % N;  

    for (int i = 0; i < K; i++) { 
        int temp = arr[N - 1];  
        for (int j = N - 1; j > 0; j--) {  
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;}
}
