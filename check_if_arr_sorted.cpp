#include<iostream>
using namespace std;

/* naive method 
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
*/


// efficient: time complexity is O(n)
int isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}


int main(){
    int arr[] = {5,7,8,9};
    cout << "answer: " << isSorted(arr,4);
    return 0;
}