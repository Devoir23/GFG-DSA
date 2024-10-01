#include<bits/stdc++.h>
using namespace std;

// function to find maximum
int largest(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++){ 
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

// driver code 
int main(){
    int arr[] = {10,12,5,44,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< largest(arr,n);
    return 0;
}