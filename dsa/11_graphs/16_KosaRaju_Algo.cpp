/* TOPIC:  */

// TIME COMPLEXITY: O(N+E)
// SPACE COMPLEXITY: O(N)

// REFERENCE: 

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int, bool>& visited, stack<int>& s,unordered_map<int, list<int>>& adj){
	visited[node] = true;
	for(auto neibhour : adj[node]){
		if(!visited[neibhour]){
			dfs(neibhour, visited,s,adj);
		}
	}	
	s.push(node);
}

void revdfs(int node,unordered_map<int, bool>& visited,unordered_map<int, list<int>>& adj ){
	visited[node] = true;
	for(auto nbr : adj[node]){
		if(!visited[nbr]){
			revdfs(nbr, visited, adj);
		}
	}	
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	// Write your code here.
	unordered_map<int, list<int>> adj;
	for(int i=0;i<edges.size();i++){
		int u = edges[i][0];
		int v = edges[i][1];
		adj[u].push_back(v);
	}
	unordered_map<int, bool> visited;
	stack<int> s;
	for(int i=0;i<v;i++){
		if(!visited[i]){
			dfs(i, visited, s, adj);
		}
	}

	// transpose
	unordered_map<int, list<int>> transpose;
	for(int i=0;i<v;i++){
		visited[i] = 0;
		for(auto nbr : adj[i]){
			transpose[nbr].push_back(i);
		}
	}

	int count = 0;
	while(!s.empty()){
		int top = s.top();
		s.pop();
		if(!visited[top]){
			count++;
			revdfs(top, visited, transpose);
		}
	}
	return count;
}

int main() {

    

    return 0;
}