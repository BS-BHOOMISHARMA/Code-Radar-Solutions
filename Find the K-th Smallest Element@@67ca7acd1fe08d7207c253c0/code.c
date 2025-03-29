#include <algorithm> // For sort function

using namespace std;

int kthSmallest(int arr[], int n, int k) {
    sort(arr, arr + n); // Sorting the array
    return arr[k - 1];}