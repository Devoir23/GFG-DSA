#include<bits/stdc++.h>
using namespace std;

// logic: two pointer approach 

int maxIndexDiff(vector<int>& arr) {
        int n = arr.size();
         // Step 1: Create and fill leftMin array
        vector<int> lMin(n);
        lMin[0] = arr[0];
        for (int i = 1; i < n; i++) {
            lMin[i] = min(arr[i], lMin[i - 1]);
        }
    
        // Step 2: Create and fill rightMax array
        vector<int> rMax(n);
        rMax[n - 1] = arr[n - 1];
        for (int j = n - 2; j >= 0; j--) {
            rMax[j] = max(arr[j], rMax[j + 1]);
        }
    
        // Step 3: Traverse both arrays using two pointers
        int i = 0, j = 0, maxDiff = -1;
        while (i < n && j < n) {
            if (lMin[i] <= rMax[j]) {
                maxDiff = max(maxDiff, j - i);
                j++;
            } else {
                i++;
            }
        }
    
        return maxDiff;
    }


int main() {
    vector<int> arr = {15};
    int n = arr.size();
    cout << maxIndexDiff(arr) << endl;
    return 0;
}