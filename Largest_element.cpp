#include<iostream>
using namespace std;

// function to get the index of the largest element
int LargestElement(int arr[], int n) {
    int largestIndex = 0;  // Assume the first element is the largest
    for (int i = 1; i < n; i++) {  // Start from the second element
        if (arr[i] > arr[largestIndex]) {
            largestIndex = i;  // Update largestIndex if current element is larger
        }
    }
    return largestIndex;
}

int main() {
    int arr[] = {5, 8, 20, 10};
    cout << "Index of largest element: " << LargestElement(arr, 4);
    return 0;
}
