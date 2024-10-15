#include<bits/stdc++.h>
using namespace std;

vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
        
        // single traversal approach2
        for(int i=0; i<sizeOfArray; i++){
            if(arr[i]>max){
                max2=max;
                max=arr[i];
            }
            else if(arr[i] > max2 && arr[i]!=max){
                max2 = arr[i];
            }
        }
        
        // if no second max exist then return -1
        if(max2==INT_MIN){
            max2=-1;
        }
        return  {max, max2};
    }


int main() {
    int arr[] = {2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> result = largestAndSecondLargest(n, arr);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}