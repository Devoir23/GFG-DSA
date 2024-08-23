// naive solution

#include<iostream>
using namespace std;

// funtion to get largest element 
int LargestElement(int arr[], int n){
    
    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j=0; j<n; j++){
            if(arr[j]>arr[i]){
                flag = false;
                break;
            }
        }    
        if (flag == true) {
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int arr[] = {50,8,2,10};
    cout << LargestElement(arr,4);
    return 0;
}
