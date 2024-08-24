#include<iostream>
using namespace std;

//naive method: T->O(n), S-> O(n)
int remDup(int arr[], int n){
    // new temp array
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for(int i=1;i<n;i++){
        if(temp[res-1]!=arr[i]){
            // iterating temp array
            temp[res]=arr[i];
            // increment res-> size
            res++;
        }
    }
    for(int i=0; i<res;i++){
        arr[i]=temp[i];
    }
    return res;
}

int main(){
    int arr[] ={5,2,2,2,4,4,4,5};
    cout << remDup(arr,8);
    return 0;
}