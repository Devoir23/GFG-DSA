#include<iostream>
using namespace std;

// try to copy first d elemnts into temp

void lRotateD(int arr[], int n, int d){
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
        cout<<"temp";
        cout << arr[i] <<" ";
    }
    // cout<<endl;
    for(int i=d; i<n;i++){
        arr[i-d] = arr[i];
        // cout << arr[i] << " ";
    }
    // cout<<endl;
    for(int i=0; i<d; i++){
        arr[n-d+i] = temp[i];
        // cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    lRotateD(arr,n,2);
    for(int i=0; i<n;i++){
        cout<<arr[i] << " "; 
    }
    return 0;
}