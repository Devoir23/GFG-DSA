#include<iostream>
using namespace std;

// naive method 
bool isSorted(int arr[], int n){
    for(int i=0; i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                return false;
            }
        }
    }
    return true;
}


int main(){
    int arr[] = {5,7,6,8};
    cout << "answer: " << isSorted(arr,4);
    return 0;
}