#include<bits/stdc++.h>
using namespace std;

//Disjoint Set Union...............................

void make_set(int parent[],int size[],int n)
{
	for(int i=1;i<=n;i++)
	{
		parent[i]=i;
		size[i]=1;
	}
}
int find(int parent[],int v)
{
	if(parent[v]==v)
		return v;
	else
	    return parent[v]=find(parent,parent[v]);
}
void make_union(int parent[],int size[],int u,int v)
{
	int a=find(parent,u);
	int b=find(parent,v);
	if(a!=b)
	{
		if(size[a]<size[b])
		{
		  parent[a]=b;
		  size[b]+=size[a];
	    }
	    else
	    {
	      parent[b]=a;
	      size[a]+=size[b];
		}
	}	
}

//Khrushkal Minimum Spanning Tree........................


int KMST(vector<pair<int,pair<int,int> > > &graph,int n)
{
	sort(graph.begin(),graph.end());
	int parent[n+1],size[n+1];
	make_set(parent,size,n);
	int s=0;
	for(int i=0;i<graph.size();i++)
	{
		int u=graph[i].second.first;
		int v=graph[i].second.second;
		int w=graph[i].first;
		if(find(parent,u)!=find(parent,v))
		{
			make_union(parent,size,u,v);
			s+=w;
		}
	}
	return s;	
}

//Supposting function for second best minimum spanning tree .................


int MST(vector<pair<int,pair<int,int> > > &graph,int n,pair<int,pair<int,int> > excl)
{
	int parent[n+1],size[n+1];
	make_set(parent,size,n);
	int s=0;
	for(int i=0;i<graph.size();i++)
	{
		if(graph[i]!=excl)
		{
		   int u=graph[i].second.first;
		   int v=graph[i].second.second;
		   int w=graph[i].first;
		   if(find(parent,u)!=find(parent,v))
		   {
		    	make_union(parent,size,u,v);
			    s+=w;
		   }
	    }
	}
	return s;	
}

//Second best minimum spanning tree ........................................


int SMST(vector<pair<int,pair<int,int> > > &graph,int n)
{
	sort(graph.begin(),graph.end());
	vector<pair<int,pair<int,int> > > mst;
	int parent[n+1],size[n+1];
	make_set(parent,size,n);
	int s=0;
	for(int i=0;i<graph.size();i++)
	{
		int u=graph[i].second.first;
		int v=graph[i].second.second;
		int w=graph[i].first;
		if(find(parent,u)!=find(parent,v))
		{
			make_union(parent,size,u,v);
			mst.push_back(graph[i]);
			s+=w;
		}
	}
	s=INT_MAX;
	for(int i=0;i<mst.size();i++)
	{
	   s=min(s,MST(graph,n,mst[i]));
	}
	return s;	
}

int main()
{
	int n,m,u,v,w;
	cout<<"enter number of nodes and edges"<<endl;
	cin>>n>>m;
	vector<pair<int,pair<int,int> > > graph;
	cout<<"enter edges and weight"<<endl;
	for(int i=0;i<m;i++)
	{
	   cin>>u>>v>>w;
	   graph.push_back(make_pair(w,make_pair(u,v)));	
	}
    cout<<KMST(graph,n)<<endl;
    cout<<SMST(graph,n)<<endl;
}
/*
6 9
1 2 2
1 4 1
2 4 3
1 5 4
5 4 9
3 4 5
2 3 3
2 6 7
3 6 8
*/
