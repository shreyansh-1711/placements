// TC = O(E log V)
// SC = O(E+V)


// #include <bits/stdc++.h> 
// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
//     unordered_map<int,list<pair<int,int>>> adj;
//     for(int i=0;i<edges;i++){
//         int u = vec[i][0];
//         int v = vec[i][1];
//         int w = vec[i][2];

//         adj[u].push_back(make_pair(v,w));
//         adj[v].push_back(make_pair(u,w));
          
//     }
//     vector<int> dist(vertices);
//     for(int i= 0; i<vertices;i++){
//         dist[i] = INT_MAX;
//     }
//     set<pair<int, int>> st;
//     dist[source] = 0;
//     st.insert(make_pair(0, source));

//     while(!st.empty()){
//         auto top = *(st.begin());
//         int nodeDistance = top.first;
//         int topNode = top.second;

//         st.erase(st.begin());

//         for(auto neibhour : adj[topNode]){
//             if(nodeDistance + neibhour.second < dist[neibhour.first]){
//                 auto record = st.find(make_pair(dist[neibhour.first], neibhour.first));
//                 if(record != st.end()){
//                     st.erase(record);
//                 }
//                 dist[neibhour.first] = nodeDistance + neibhour.second;
//                 st.insert(make_pair(dist[neibhour.first], neibhour.first));
//             }
//         }
//     }
//     return dist;
// }
