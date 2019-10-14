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
	
#define mx 1000005
    
using namespace std;

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pl;

ld pi=2.0*acos(0.0);

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

#define M 26

ll A[mx];
ll tree[mx];
ll N;

				//	Tree is 1 indexed array is 0 indexed

ll seg_neutral(){
	return 0;
}

ll seg_fun(ll a,ll b){
	return (a|b);
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

// void propagate_lazy(ll node, ll left, ll right){
// 	if (lazy[node]!=0)
// 	{
// 			tree[node] += (right-left+1)*lazy[node]; 
		
// 		if (left!=right)
// 		{
// 			lazy[node*2+1] += lazy[node];
// 			lazy[node*2] += lazy[node];
// 		}
// 		lazy[node]=0;
// 	}
// }

// void lazy_update(ll left, ll right, ll val, ll node=1, ll start=0, ll end=N-1){
// 	propagate_lazy(node,start,end);
// 	if (right<start||left>end)
// 	{
// 		return;
// 	}
// 	if(start>=left&&end<=right)
// 	{
// 		lazy[node]=val;
// 		propagate_lazy(node,start,end);
// 		return;
// 	}
// 	ll mid = (start + end)/2;

// 	lazy_update(left,right,val,2*node,start,mid);
// 	lazy_update(left,right,val,2*node+1,mid+1,end);

// 	tree[node]=seg_fun(tree[2*node],tree[2*node+1]);
// }

// ll lazy_query(ll left, ll right, ll node=1, ll start=0, ll end=N-1){
// 	propagate_lazy(node,start,end);
// 	if (right<start||left>end)
// 	{
// 		return seg_neutral();
// 	}
// 	if(start>=left&&end<=right)
// 	{
// 		return tree[node];
// 	}
// 	ll mid = (start + end)/2;
	
// 	return seg_fun(lazy_query(left,right,2*node,start,mid),lazy_query(left,right,2*node+1,mid+1,end));

// }










int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		// freopen("../../../input","r",stdin);
		// freopen("../../../output","w",stdout);
    	// #define mx 100005
    #else
		// #define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	char V,G;
	char B[mx];
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;


	cin>>B;
	N=strlen(B);
	// A[0]=1<<(B[0]-'a');
	// cout<<N;
	// cout<<B;
	rep(i,0,N){
		A[i]=1<<(B[i]-'a');
		// cout<<A[i];
	}
	
	build();

	cin>>t;
	
	// rep(i,0,10 )

	while(t--){
	
		f=0;
		r=0;
	
		cin>>a>>b;
		
		if (a==1)
		{
			cin>>V;
			update(b-1,1<<(V-'a'));
			continue;
		}else{
			cin>>c;
			r=bitcount(query(b-1,c-1));
		}		
		cout<<r<<"\n";	
	}

	return 0;
}