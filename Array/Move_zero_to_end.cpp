#include<iostream>
using namespace std;

void moveToend(int arr[], int n){
    for(int i=0; i<n;i++){
        if(arr[i]==0){
            for(int j=i+1; j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
}

int main(){
    int arr[] = {10,5,0,0,8,0,9,0};
    moveToend(arr,9);
    for(int i=0; i<9; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}