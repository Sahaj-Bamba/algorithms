#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod 1000000007
#define INF LLONG_MAX

#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define bin_long stoi(to_string(x), nullptr, 2);

#define pb push_back
#define mp make_pair
#define f first
#define s second
	
#define mx 100005
    
using namespace std;

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pl;

ld pi=2.0*acos(0.0);


ll A[mx];
ll tree[30][mx]={{0}};
ll N;
ll X;
				//	Tree is 1 indexed array is 0 indexed
/*
ll seg_neutral(){
	return 0;
}

void seg_fun(ll a,ll b,ll c){
	rep(X,0,30){
		tree[X][a]=tree[X][b] + tree[X][c];
	}
}

void build (ll node=1, ll start=0, ll end=N-1){
    
    if(start == end){
    	X=0;
    	while(A[start]!=0){
    		if(A[start]%2==1)
    		tree[X][node]++;
    		A[start]/=2;
    		X++;
    	}
    	return;
    }

    ll mid = (start + end)/2;

    build(2*node,start,mid);
    build(2*node+1,mid+1,end);

    seg_fun(node,2*node,2*node+1);
}*/
/*
void update(ll idx, ll val, ll node=1, ll start=0, ll end=N-1){
	if (start == end)
	{
		A[idx]=val;
		tree[node]=val;
		return;
	}
	ll mid = (start + end)/2;
	if (idx<=mid)
	{
		update(idx,val,2*node,start,mid);
	}else{
		update(idx,val,2*node+1,mid+1,end);
	}
	tree[node]=seg_fun(tree[2*node],tree[2*node+1]);
}
*//*
ll query(ll left, ll right, ll node=1, ll start=0, ll end=N-1){
	if (right<start||left>end)
	{
		return seg_neutral();
	}
	if(start>=left&&end<=right)
	{
		return tree[node];
	}
	ll mid = (start + end)/2;

	return seg_fun(query(left,right,2*node,start,mid),query(left,right,2*node+1,mid+1,end));
}


*/
mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    	// #define mx 100005
    #else
		// #define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,e,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>n;
	rep(i,0,n){
		cin>>A[i];
		x=0;
		rep(j,0,30){
			tree[x][i+1]=tree[x][i] + A[i]%2;
 			A[i]/=2;
    		x++;
    	}
    	// while(A[i]!=0){
    	// 	if(A[i]%2==1)
    	// 	tree[x][i]++;
    	// 	A[start]/=2;
    	// 	X++;
    	// }
	}
	cin>>t;
	while(t--){
		cin>>l>>r>>k;
		y=0;
		rep(i,0,30){
			y = max(y,tree[i][r]-tree[i][l-1]);
		}
		if(y>=k){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}

	return 0;
}