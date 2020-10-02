#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
#define INF LLONG_MAX

#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define bin_long stoi(to_string(x), nullptr, 2);

using namespace std;
typedef long double ld;
ld pi=2.0*acos(0.0);

typedef long long int ll;
typedef pair<ll,ll> pl;

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N,X,Y,Z;

struct my
{
    ll ind;
    ll val;
    ll sum;
};

vector<ll> V[mx];
my tree[mx];
ll Vis[mx];

ll dfs(ll node){
    if (Vis[node]==1) {
        return 0;
    }
    Vis[node]=1;
    if (V[node].size()==1) {
        return tree[node].sum=tree[node].val;
    }

    ll sum=0;
    for(auto i : Vis[node])
    {
        sum+=dfs(i);
    }
    return tree[node].sum=sum;
}

ll dfs2(ll node){
    if (Vis[node]==1) {
        return 0;
    }
    Vis[node]=1;
    if (V[node].size()==1) {
        max(tree[node].sum,-1*X);
    }
    
    ll sum=0;
    for(auto i : Vis[node])
    {
        sum+=dfs(i);
    }
    return tree[node].sum=sum;
}


int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("../../input","r",stdin);
    freopen("../../output","w",stdout);
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll A[mx];
	memset(A,-1,sizeof(A));
    my C,B;
	cin>>t;
	while(t--){
        memset(Vis,0,sizeof(Vis));
        rep(i,0,mx){
            V[i].clear;
        }
        // rep(i,0,mx){
        //     tree[i].sum=0;
        // }
		f=0;
		r=0;
		cin>>n>>x;
		rep(i,1,n+1){
            cin>>tree[i].val;
            tree[i].ind=i;
            tree[i].sum=0;
        }
        rep(i,0,n-1){
            cin>>a>>b;
            V[a].pb(b);
            V[b].pb(a);
        }	
		dfs(1);
        mem(Vis,0);
        dfs2(1);
        r=tree[1].sum;
		cout<<r<<"\n";	
	}

	return 0;
}