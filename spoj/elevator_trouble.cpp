// link :: https://www.spoj.com/problems/ELEVTRBL/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double db;
#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)
#define size1 200005
#define mod 1000000007
#define vll         vector < ll >
#define vpll        vector < pair < ll ,ll> >
#define pii         pair < int,int >
#define pll         pair < ll,ll >
#define fi          first
#define se          second
#define pb(x)       push_back(x)
#define endl        "\n"
#define mem1(x)     memset(x,-1,sizeof x)
#define mem(x)      memset(x,0,sizeof x)
#define mem63(x)    memset(x,63,sizeof x)
 
int vis[1000002];
 
int main()
{
    boost1;
    boost2;
    int n,ans,flag=0,f,g,s,u,d;
    cin>>f>>s>>g>>u>>d;
    queue<pii> q;
    q.push(make_pair(s,0));
    pii temp;
    mem(vis);
    while(!q.empty()){
        temp = q.front();
        q.pop();
        vis[temp.first] = 1;
        if(temp.first == g){
            flag = 1;
            ans = temp.second;
            break;
        }
        if(temp.first + u <= f){
            if(!vis[temp.first + u]){
                vis[temp.first + u] = 1;
                q.push(make_pair(temp.first + u,temp.second + 1));
 
            }
        }
        if(temp.first - d > 0){
            if(!vis[temp.first - d]){
                vis[temp.first - d] = 1;
                q.push(make_pair(temp.first - d,temp.second + 1));
            }
        }
    }
    if(flag){
        cout<<ans;
    }else{
        cout<<"use the stairs";
    }
 
    return 0;
}
