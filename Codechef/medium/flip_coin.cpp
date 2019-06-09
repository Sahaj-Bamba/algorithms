#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
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

#define mx 1000005
ll A[mx];
ll tree[mx];
ll lazy[mx]={0};
ll N;

ll seg_neutral(){
	return 0;
}

ll seg_fun(ll a,ll b){
	return (a+b);
}

void build (ll node=1, ll start=0, ll end=N-1){
    
    if(start == end){
    	tree[node]=A[start];
    	return;
    }

    ll mid = (start + end)/2;

    build(2*node,start,mid);
    build(2*node+1,mid+1,end);

    tree[node]=seg_fun(tree[2*node],tree[2*node+1]);
}

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

void propagate_lazy(ll node, ll left, ll right){
	if (lazy[node]!=0)
	{
		tree[node] = (right-left+1)-tree[node]; 
		
		if (left!=right)
		{
			lazy[node*2+1] += lazy[node];
			lazy[node*2+1]%=2;
			lazy[node*2] += lazy[node];
			lazy[node*2]%=2;
		}
		lazy[node]=0;
	}
}

void lazy_update(ll left, ll right, ll val=1 , ll node=1, ll start=0, ll end=N-1){
	propagate_lazy(node,start,end);
	if (right<start||left>end)
	{
		return;
	}
	if(start>=left&&end<=right)
	{
		lazy[node]+=val;
		lazy[node]%=2;
		propagate_lazy(node,start,end);
		return;
	}
	ll mid = (start + end)/2;

	lazy_update(left,right,val,2*node,start,mid);
	lazy_update(left,right,val,2*node+1,mid+1,end);

	tree[node]=seg_fun(tree[2*node],tree[2*node+1]);
}

ll lazy_query(ll left, ll right, ll node=1, ll start=0, ll end=N-1){
	propagate_lazy(node,start,end);
	if (right<start||left>end)
	{
		return seg_neutral();
	}
	if(start>=left&&end<=right)
	{
		return tree[node];
	}
	ll mid = (start + end)/2;
	
	return seg_fun(lazy_query(left,right,2*node,start,mid),lazy_query(left,right,2*node+1,mid+1,end));

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
	memset(A,0,sizeof(A));
	
	cin>>N>>t;
	build();

	while(t--){
		f=0;
		r=0;
		cin>>a>>b>>c;
		if (a==0)
		{
			lazy_update(b,c);
		}else{
			cout<<lazy_query(b,c)<<"\n";
		}
		
	}

	return 0;
}