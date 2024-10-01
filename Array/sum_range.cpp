// void range_sum(arr, n)
// {
//     prefix[n] = {0}
//     prefix[0] = arr[0]
//     for i = 1 to n-1 :
//         prefix[i] = a[i] + prefix[i-1]

//     for (i = 1 to q )
//     {
//         if (l == 0) 
//         {
//             ans = prefix[r]
//             print(ans)
//         }
//         else 
//         {
//             ans = prefix[r] - prefix[l-1]
//             print(ans)
//         }
//     }
// }


#include<iostream>
#include<vector>
using namespace std;

vector<int> rangeSum(vector<int>& arr, int n, vector<vector<int>>& queries){
    // first we will calculate prefix sum
    vector<int> prefix(n,0);
    prefix[0] = arr[0];
    for(int i=1; i<n;i++){
        prefix[i] = arr[i] + prefix[i-1];
    }

    // now process queries 
    vector<int> result;
    for(const auto& query : queries){
        int l = query[0];
        int r = query[1];

        if(l==0){
            result.push_back(prefix[r]);
        }else{
            result.push_back(prefix[r] - prefix[l-1]);
        }
    }
    return result;
}


int main(){
    vector<int> arr = {4, 5, 3, 2, 5};
    int n = sizeof(arr);
    int q = 3;
    vector<vector<int>> queries = {{0, 3}, {2, 4}, {1, 3}};
    // Call rangeSum function
    vector<int> result = rangeSum(arr, n, queries);

    // input 
    cout<<"Input:\n"<< q <<endl;

    for(const auto& query : queries){
        cout<< query[0] << " " << query[1] <<endl;
    }

    // output
    cout << "Output: " << endl;
    for(int i=0; i<result.size(); i++){
        cout<< result[i] << " (";
        for (int j = queries[i][0]; j <= queries[i][1]; j++){
            cout << arr[j];
            if(j<queries[i][1]){
                cout<<"+";
            }
        }
        cout << ") " << endl;
    }


    return 0;
}