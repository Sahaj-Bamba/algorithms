#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int> adj[],int visited[],int s)
{
	visited[s]=1;
	cout<<s<<" ";
	queue<int> q;
	q.push(s);
	while(!q.empty())
	{
		int x=q.front();
		q.pop();
		for(int i=0;i<adj[x].size();i++)
		{
			if(visited[adj[x][i]]==0)
			{
				cout<<adj[x][i]<<" ";
				visited[adj[x][i]]=1;
				q.push(adj[x][i]);
			}
		}
	}
}
bool Bipartite(vector<int> adj[],int n)
{
	bool flag=true;
	vector<int> visited(n+1,2);
	queue<int> q;
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==2)
		{
			q.push(i);
			visited[i]=1;
			while(!q.empty())
			{
				int x=q.front();
				q.pop();
				for(int j=0;j<adj[x].size();j++)
				{
					int v=adj[x][j];
					if(visited[v]==2)
					{
						visited[v]=visited[x]^1;
						q.push(v);
					}
					else
					{
						flag=flag&&(visited[x]!=visited[v]);
					}
				}
			}	
		}
	}
	return flag;
}
void BFS(vector<int> adj[],int n)
{
	int visited[n+1]={0};
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==0)
	    	bfs(adj,visited,i);
	}
}
void dfs(vector<int> adj[],int visited[],int s)
{
	cout<<s<<" ";
	visited[s]=1;
	for(int i=0;i<adj[s].size();i++)
	{
		if(visited[adj[s][i]]==0)
		  dfs(adj,visited,adj[s][i]);
	}
}
void DFS(vector<int> adj[],int n)
{
	int visited[n+1]={0};
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==0)
		{
		  dfs(adj,visited,i);
		  cnt++;
	    }
	}
	cout<<"Number of connected components "<<cnt<<endl;
}
int main()
{
	int n,m,i,u,v;
	cout<<"enter number of nodes and edges"<<endl;
	cin>>n>>m;
	vector<int> adj[n+1];
	cout<<"Enter edges"<<endl;
	for(i=0;i<m;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	BFS(adj,n);
	cout<<endl;
	DFS(adj,n);
	cout<<endl;
	cout<<Bipartite(adj,n)<<endl;
}

