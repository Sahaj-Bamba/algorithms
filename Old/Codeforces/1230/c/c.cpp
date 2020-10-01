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

ll N;

std::vector<ll> V[10];
std::vector<pl> V2;
// std::vector<pl> v;
ll A[10][10]={{0}};
ll B[10];	

// ll fun(ll mask,ll idx){
// 	if (idx == n)
// 	{
// 		return chk();
// 	}
// 	rep(i,0,6){
// 		if (mask)
// 		{
// 			/* code */
// 		}
// 	}
// }

bool fun(pl a,pl b){
	if (a.f>b.f)
	{
		return true;
	}else if (a.f < b.f)
	{
		return false;
	}
	if (a.s<=b.s)
	{
		return true;
	}else{
		return false;
	}
}

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
	// memset(A,-1,sizeof(A));
	map<ll,ll> M; 
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>n>>m;

	N=n;

	rep(i,0,m){
		cin>>a>>b;
		if (a<b)
		{
			V[a].pb(b);
			A[a][b]=1;	
		}else{
			V[b].pb(a);
			A[b][a]=1;
		}
	}

	// r = fun(0,0);

	// rep(i,0,n+1)

	rep(i,1,n+1){
		V2.pb(mp(V[i].size(),i));
	}
	sort(V2.begin(), V2.end(),fun);
	r=0;
	f = 1;
	for(auto X : V2 ){
		M[f++] = X.s;
		// if (f==)0
		// {
		// 	/* code */
		// }
		// if (f==0)
		// {
		// 	break;
		// }
		// r+=min(f,X.f);
		// f--;
	}
	// cout<<M[2];
	// cout<<A[M[3]][M[4]];
	rep(i,1,7){
		rep(j,i + 1,7){
			if (A[M[i]][M[j]] == 1)
			{
				r++;
			}
		}
		// cout<<r<<" ";
	}
	if (n==7 && V2[0].f>=6)
	{
		r++;
	}
	// if (V2[0].f==6)
	// {
	// 	r++;
	// }

	cout<<r<<"\n";

	return 0;
}