#include<bits/stdc++.h>

using namespace std;

vector<int> adj[500001];
int size1[500001];
int visited[500001];

void dfs(int i)
{
    stack<int> s;
    s.push(i);
    set<int> st;

    while(!s.empty())
    {
            int k=s.top();
            s.pop();
            visited[k]=1;
            st.insert(k);
            for(int l=0;l<adj[k].size();l++)
            {
                if(visited[adj[k][l]]==0)
                {
                    s.push(adj[k][l]);
                    st.insert(adj[k][l]);
                }
            }

    }
    int size2=st.size();
    set<int>::iterator it;
     for (it = st.begin(); it!=st.end();  ++it)
        size1[*it]=size2;

}

int main()
{
    int m,n;
    cin>>n>>m;
    while(m--)
    {
        int k;
        cin>>k;
        int d[k];
        for(int i=0;i<k;i++)
        {
            cin>>d[i];
            adj[d[0]].push_back(d[i]);
            adj[d[i]].push_back(d[0]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(size1[i]==0)
        dfs(i);
    }

    for(int i=1;i<=n;i++)
    cout<<size1[i]<<" ";

}
