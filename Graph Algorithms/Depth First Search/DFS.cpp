#include <bits/stdc++.h>
using namespace std;

vector <int> graph[1001]; //adjacency list of graph
vector <bool> vis(1001); //visited array

void dfs(int node){
	vis[node]=1; // marking the node visited.
	cout<<node<<" ";
	for(int child:graph[node]){
		if(vis[child]==0){
			dfs(child); //checking if child is not been visited and then calling dfs on the child.
		}
	}
}

int main() {
	int nodes,edges;
	cin>>nodes>>edges; //nodes and edges of graph
	for(int i=0;i<edges;i++){
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x); //Creating an undirected graph
	}
	dfs(1);//dfs starting from node 1
	return 0;
}