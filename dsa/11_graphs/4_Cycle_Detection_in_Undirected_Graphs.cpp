// #include<bits/stdc++.h>
// bool isCycleBFS(int src,unordered_map<int , bool>& visited, unordered_map<int, list<int>>& adj){
//     unordered_map<int, int> parent;
//     parent[src] = 1;
//     visited[src] = 1;
//     queue<int> q;
//     q.push(src);
//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         for(auto neibhour : adj[front]){
//             if(visited[neibhour] == true && neibhour != parent[front]){
//                 return true;
//             }else if(!visited[neibhour]){
//                 q.push(neibhour);
//                 visited[neibhour] = 1;
//                 parent[neibhour] = front;
//             }
//         }
//     }
//     return false;
    
// }

// bool isCycleDFS(int node, int parent,unordered_map<int , bool>& visited, unordered_map<int, list<int>>& adj ){
//     visited[node] = true;
//     for(auto neighbour : adj[node] ){
//         if(!visited[neighbour]){
//             bool cycle = isCycleDFS(neighbour, node, visited, adj);
//             if(cycle){
//                 return true;
//             }
//         }else if(neighbour != parent){
//             return true;
//         }
//     }
//     return false;
// }

// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     // Write your code here.
//     unordered_map<int, list<int>> adj;
//     for(int i=0;i<m;i++){
//         int v = edges[i][0];
//         int u = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     unordered_map<int , bool>visited;
//     for(int i=0;i<n;i++){
//         if(!visited[i]){
//             bool ans = isCycleDFS(i,-1,visited,adj);
//             if(ans==1){
//                 return "Yes";
//             }
//         }
//     }
//     return "No";
// }
