#include<bits/stdc++.h>

using namespace std;

int parent[51];
int visited[51];

vector<pair<int,int> > adj[51];



#define INF 10000000000000009
#define MAX 100009
#define pii pair <long long ,long long >
#define pb push_back
//vector < pii > graph[MAX];
long long dist[51];
void Reset()
{
	memset(dist,INF,sizeof(dist));
	long long i;
	for(i=0;i<MAX;i++)
	adj[i].clear();
}
void dijkstra(long long start)
{
	priority_queue < pii , vector< pii >,greater< pii > > q;	//in the priority queue the greater func is default
 	dist[start]=0;
 	q.push(pii(0,start));	//pushing the starting node
 	long long i,v,w,u,c;

 	while(!q.empty())
 	{
 		u=q.top().second;
 		c=q.top().first;
 		q.pop();
 		for(i=0;i<adj[u].size();i++)
 		{

 			v=adj[u][i].first;
 			w=adj[u][i].second;

 			if(dist[v]>dist[u]+w)
 			{
 				dist[v]=dist[u]+w;
 				q.push(pii(dist[v],v));
	 		}
	    }
	}
}





int f_parent(int x)
{
    if(parent[x]==x)
    return x;

    parent[x]=f_parent(parent[x]);
}



int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        for(int i=1;i<=n;i++)
        {
            parent[i]=i;
        }

        for(int i=0;i<51;i++)
        adj[i].clear();


        vector<pair<int,pair<int,int> > > v;

        int flag=0;

        int x,y,z;

        for(int i=0;i<m;i++)
        {
            cin>>x>>y>>z;

            v.push_back(make_pair(z,make_pair(x,y)));
        }

        sort(v.begin(),v.end());


        for(int i=0;i<v.size();i++)
        {
            int x1=(v[i].second).first;
            int y1=(v[i].second).second;
            int z1=v[i].first;

            if(f_parent(x1)==f_parent(y1))
            {
                for(int k=0;k<=51;k++)
                visited[k]=0;
                Reset();
                dijkstra(x1);
                int d=dist[y1];
                if(d<z1)
                {
                    flag=1;
                    break;
                }
                else if(d>z)
                {
                    adj[x1].push_back(make_pair(y1,z1));
                    adj[y1].push_back(make_pair(x1,z1));


                }
            }
            else
            {
                if(f_parent(x1)<f_parent(y1))
                {
                    parent[f_parent(x1)]=parent[f_parent(y1)];
                }
                else
                {
                    parent[f_parent(y1)]=parent[f_parent(x1)];
                }

                adj[x1].push_back(make_pair(y1,z1));
                adj[y1].push_back(make_pair(x1,z1));
            }

            if(flag==1)
            cout<<"impossible\n";
            else
            {
                int B[n+1][n+1];
                memset(B,-1,sizeof(B));
                int e=0;
                for(int i=0;i<51;i++)
                {
                    for(int j=0;j<adj[i].size();j++)
                    {
                        B[i][adj[i][j].first]=adj[i][j].second;
                        e++;
                    }
                }

                cout<<e/2<<"\n";
                for(int i=1;i<=n;i++)
                {
                    for(int j=i+1;j<=n;j++)
                    {
                        if(B[i][j]!=-1)
                        {
                            cout<<i<<" "<<j<<" "<<B[i][j]<<"\n";
                        }

                    }
                }
            }
        }
    }
}
