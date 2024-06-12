/* TOPIC:  */

// TIME COMPLEXITY: O()
// SPACE COMPLEXITY: O()

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
    vector<int> dist(n+1, 1e9);
    dist[src] = 0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            if(dist[u]!=1e9 && (dist[u] + w) < dist[v]){
                dist[v] = dist[u] + w;
            }
        }
    }

    //check for -ve cycle
    bool flag = 0;
    for(int j=0;j<m;j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            if(dist[u]!=1e9 && (dist[u] + w) < dist[v]){
               flag = 1;
            }
        }

     if(flag == 0){
         return dist[dest];
     }   
     return -1;
}
         
int main() {

    

    return 0;
}