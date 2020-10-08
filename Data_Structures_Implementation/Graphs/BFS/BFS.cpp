#include <bits/stdc++.h>
using namespace std;

vector <int> graph[1001]; //adjacency list of graph
vector <bool> vis(1001); //visited array

void bfs(int node){
	vis[node]=1;
	queue <int> q; //queue for storing nodes 
	q.push(node);
	//cout<<node<<" ";
	while(!q.empty()){
		int x=q.front();
		cout<<x<<" "; 
		q.pop();
		for(int child:graph[x]){
			if(vis[child]==0){ //checking if the child is not visited and then marking it visited and pushing to the queue.
				vis[child]=1;
				q.push(child);
			}
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
	bfs(1);//bfs starting from node 1
	return 0;
}