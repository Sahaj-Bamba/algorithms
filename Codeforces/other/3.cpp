#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005

#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)

using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pl;

ll A[mx];
ll n,k,a,b;
//ll tree[mx]={0};

// void build(ll node, ll start, ll end)
// {
//     if(start == end)
//     {
//         tree[node] = A[start];
//     }
//     else
//     {
//         ll mid = (start + end) / 2;
//         build(2*node, start, mid);
//         build(2*node+1, mid+1, end);
//         tree[node] = tree[2*node] + tree[2*node+1];
//     }
// }

// ll query(ll node, ll start, ll end, ll l, ll r)
// {
//     if(r < start or end < l)
//     {
//         return 0;
//     }
//     if(l <= start and end <= r)
//     {
//         return tree[node];
//     }
//     ll mid = (start + end) / 2;
//     ll p1 = query(2*node, start, mid, l, r);
//     ll p2 = query(2*node+1, mid+1, end, l, r);
//     return (p1 + p2);
// }

ll bs1(ll z){
	ll p,q,r,m;
	p=0;
	q=k-1;
	r=-1;
	while(p<=q){
		m=(p+q)/2;
		if (A[m]>=z)
		{
			r=m;
			q=m-1;
		}else{
			p=m+1;
		} 
	}
	return r;
}

ll bs2(ll z){
	ll p,q,r,m;
	p=0;
	q=k-1;
	r=-1;
	while(p<=q){
		m=(p+q)/2;
		if (A[m]<=z)
		{
			r=m;
			p=m+1;
		}else{
			q=m-1;
		} 
	}
	return r;
}
ll fun2(ll x,ll y){
	ll i,j=0,k;
	i=bs1(x);
	if(i==-1){
		return 0;
	}
	j=bs2(y);
	if(j==-1){
		return 0;
	}
	return j-i+1;
}

ll fun(ll x,ll y){
	ll m=(x+y)/2;
	if(x==y){
		if(A[x]==0)
		return a;
		else{
			return b*A[x];
		}
	}

	if (x>y)
	{
		return 0;
	}

	ll p,q,r;
	p=fun2(x,y);
	if (p==0)
	{
		return a;
	}
	else{
		return min(fun(x,m)+fun(m+1,y),b*p*(y-x+1));
	}

}


int main(int argc, char const *argv[])
{
	fastIO
	ll c,i,j,f,r,x,y,z;
	ll m,p,q,t;
	// memset(A,0,sizeof(A));
		cin>>n>>k>>a>>b;
		f=0;
		r=0;
		//cin>>n;
		for (i = 0; i < k; ++i)
		{
			cin>>A[i];
			// A[i]--;
			// c--;
			// if(c==-1){
			// 	c=0;
			// }
			// A[c]++;
		}
		sort(A,A+k);
		
		r=fun(0,pow(2,n)-1);
		// cout<<bs1(2)<<bs2(3);
		// cout<<fun2(4,5);
		cout<<r<<"\n";
	return 0;
}