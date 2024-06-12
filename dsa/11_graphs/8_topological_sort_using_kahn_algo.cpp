// #include <bits/stdc++.h> 

// void topoSort(int node,vector<bool> & visited,stack<int>& s, unordered_map<int, list<int>>& adj ){
//         visited[node] = true;
//         for(auto neibhour : adj[node]){
//             if(!visited[neibhour]){
//                 topoSort(neibhour, visited,s,adj);
//             }
//         }
        
//         s.push(node);
// }

// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
//     // Write your code here
//     unordered_map<int, list<int>> adj;
//     for(int i=0;i<edges.size();i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
        
//     }

//     vector<int>indegree(v);
//     for(auto i : adj){
//         for(auto j:i.second){
//             indegree[j]++;
//         }
//     }

//     queue<int> q;
//     for(int i=0;i<v;i++){
//         if(indegree[i]==0){
//             q.push(i);
//         }
//     }

//     vector<int> ans;
//     while(!q.empty()){
//         int front = q.front();
//         q.pop();
//         ans.push_back(front);
//         for(auto neibhour : adj[front]){
//             indegree[neibhour]--;
//             if(indegree[neibhour]==0){
//                 q.push(neibhour);
//             }
//         }      
//     }
//     return ans;

// }