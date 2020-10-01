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

ll N;



ll A[mx];
ll tree[mx];
ll lazy[mx]={0};

				//	Tree is 1 indexed array is 0 indexed

ll seg_neutral(){
	return 0;
}

ll seg_fun(ll a,ll b){
	return max(a,b);
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

void propagate_lazy(ll node, ll left, ll right){
	if (lazy[node]!=0)
	{
			tree[node] += (right-left+1)*lazy[node]; 
		
		if (left!=right)
		{
			lazy[node*2+1] += lazy[node];
			lazy[node*2] += lazy[node];
		}
		lazy[node]=0;
	}
}

void lazy_update(ll left, ll right, ll val, ll node=1, ll start=0, ll end=N-1){
	propagate_lazy(node,start,end);
	if (right<start||left>end)
	{
		return;
	}
	if(start>=left&&end<=right)
	{
		lazy[node]=val;
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
    	#define mx 100005
    #else
		#define mx 1000005
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[mx];
	ll B[mx];
	ll C[mx];
	memset(A,-1,sizeof(A));
	a=b=c=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>n>>x>>y;
	
	N=n;
	
	rep(i,0,n)
	{
		cin>>A[i];
	}
	
	build();
	
	r=0;
	
	rep(i,0,n){

		a=i-(x);
		if (a<0)
		{
			a=0;
		}
		b=i+y;
		if (b>n-1)
		{
			b=n-1;
		}
		
		if (i==0)
		{
			if (A[i]<query(i+1,b))
			{
				cout<<i+1;
				continue;
			}
		}
		if (i==n-1)
		{
			if (A[i]<query(a,i-1))
			{
				cout<<i+1;
				return 0;
			}
			continue;
		}
		if (A[i]<query(a,i-1)&&A[i]<query(i+1,b))
		{
			cout<<i+1;
			return 0;
		}
	}


	return 0;
}