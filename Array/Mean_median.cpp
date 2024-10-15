#include<bits/stdc++.h>
using namespace std; 

// Function to find median of the array elements.
    int median(int A[], int N) {
        // Sorting the array to find the median
        sort(A, A + N);

        // If N is odd, return the middle element
        if (N % 2 != 0) {
            return A[N / 2];
        }
        // If N is even, return the floor of the average of two middle elements
        else {
            return (A[N / 2] + A[N / 2 - 1]) / 2;
        }
    }
    
    // Function to find mean of the array elements.
    int mean(int A[], int N) {
        int sum = 0;

        // Calculate the sum of array elements
        for (int i = 0; i < N; i++) {
            sum += A[i];
        }

        // Return the floor of the mean (integer division)
        return sum / N;  // integer division automatically floors the result
    }

int main() {
    int N = 5;
    int a[] = {1, 2, 19, 28, 5};
    
    std::cout << "Mean: " << mean(a, N) << std::endl;
    std::cout << "Median: " << median(a, N) << std::endl;

    return 0;
}