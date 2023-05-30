// #define ll long long
// #define lli long long int
// vector<long long> printFirstNegativeInteger(long long int A[],
//                                              long long int N, long long int K) {
            
//         //     queue<long long>q;
//         // while(!q.empty()) q.pop();
//         // vector<long long>v{};
//         // long long int i=0,j=0;
//         // while(j<n)
//         // {
//         //     if(a[j]<0) q.push(j);
//         //     if (j-i+1 < k) {
//         //         j++;
//         //         continue;
//         //     }
//         //     if(j-i+1==k)
//         //     {
//         //         v.push_back(q.empty() ? 0 : a[q.front()]);
//         //         if(q.front()==i)q.pop();
//         //         i++;
//         //     }
//         //     j++;
//         // }
//         // return v;
//         vector<ll> v;
//     vector<lli> temp(N);
//     lli i = 0, j = 0, k = 0, l = 0;
    
//     while(j < N) {
//         if(A[j] < 0) temp[l++] = A[j];
        
//         if(j - i + 1 < K) j++;
//         else if(j - i + 1 == K) {
//             if(temp.size() != 0) v.push_back(temp[k]);
//             else v.push_back(0);
            
//             if(temp[k] == A[i]) k++;
//             i++, j++;
//         }
//     }
    
//     return v;
                                                 
//  }