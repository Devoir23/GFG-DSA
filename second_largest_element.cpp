#include<iostream>
using namespace std;

//  naive solution
/*int firstLargestElement(int arr[], int n){
    int largestIndex = 0;  // Assume the first element is the largest
    for (int i = 1; i < n; i++) {  // Start from the second element
        if (arr[i] > arr[largestIndex]) {
            largestIndex = i;  // Update largestIndex if current element is larger
        }
    }
    return largestIndex;
}

int SecondLargestElement(int arr[], int n){
    int largest = firstLargestElement(arr,n); // assume this is also second largest
    int res = -1;
    for(int i=0; i<n;i++){
        if(arr[i]!=arr[largest]){
            if (res==-1){
                res=i;
            }
            else if(arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return res;
}*/


// effiecient solution
/* 
- in the one traverse
- trace from left to right
a[i] > a[largest]: res = largest, largest = i
a[i] == a[kargest]: ignore
a[i] < a[largest]
    - res == -1: res =i
    - a[i]<=a[res]: Ignore
    - a[i] > a[res]: res=i
 */

int SecondLargestElement(int arr[], int n){
    int res= -1, largest=0;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i] > arr[res]){
                res=i;
            }
        }
    }
    return res;
}

int main(){
    int arr[] = {5, 8, 20, 10};
    cout << "Index of largest element: " << SecondLargestElement(arr, 4);
    return 0;
}