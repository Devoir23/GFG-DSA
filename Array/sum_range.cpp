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