#include<iostream>
using namespace std;

//naive method: TC=theta(n); Aux space = theta(1) 
void reverese(int arr[], int n){
    int low = 0, high=n-1;
    while (low<high)
    {   
        /* code */
        // swap
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high]=temp;

        low++;
        high--;
    }
    // cout << arr;
}

int main(){
    int arr[] = {5,8,6,7};
    // cout<<reverese(arr,4);
    return 0;
}