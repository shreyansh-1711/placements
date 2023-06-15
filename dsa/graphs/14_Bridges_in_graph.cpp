/* TOPIC:  */

    // Time Complexity: O(V + E)
    // Space Complexity: O(V + E)

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &adj, vector<int> &discoverTime, vector<int> &lowTime, int parent, 
         vector<bool> &visited, int node, int &time, vector<vector<int>> &result){
    // Base Case
    if(visited[node]) return;
    visited[node] = true;
    discoverTime[node] = time;
    lowTime[node] = time;
    time++;
    for(auto neighbour : adj[node]){
        if(parent == neighbour) continue;
        if(visited[neighbour]){
            // Back Edge
            lowTime[node] = min(lowTime[node], discoverTime[neighbour]);
        }
        else{
            dfs(adj, discoverTime, lowTime, node, visited, neighbour, time, result);
            // Check for Back Edge
            lowTime[node] = min(lowTime[node], lowTime[neighbour]);
            // Check if the edge is the bridge
            if(lowTime[neighbour] > discoverTime[node]){
                vector<int> ans;
                ans.push_back(node);
                ans.push_back(neighbour);
                result.push_back(ans);
            }
        }
    } 
}


vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    // Bridge in a Graph: DFS Traversal
    // Using Back Edges
    // Time Complexity: O(V + E)
    // Space Complexity: O(V + E)
    // Build Adjacency List
    vector<vector<int>> adj(v);
    for(auto edge : edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    // Discover Time Information
    vector<int> discoverTime(v, -1);
    // earliest Possible Time
    vector<int> lowTime(v, -1);
    // Parent Information
    int parent = -1;
    // Visited Information
    vector<bool> visited(v, false);
    // Timer
    int timer = 0;
    // Find the Bridge.
    vector<vector<int>> result;
    // DFS Traversal
    for(int i = 0; i < v; i++){
        if(!visited[i]) dfs(adj, discoverTime, lowTime, parent, visited, i, timer, result);
    }

    return result;
}

int main() {

    

    return 0;
}