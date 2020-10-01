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
set<char> L;

char st[1000005];
std::vector<ll> V[20];

set<ll> K,J;
ll il;

ll fun(ll idx, ll km){
	if (idx == N)
	{
		return N;
	}
	if (L.count(st[idx])==1)
	{
		fun(idx+1,1);
	}
	if (km==0)
	{
		rep(auto I : V[st[idx]-'a']){
			K.insert(I);
		}
		fun(idx+1,1);
	}else{
		rep(auto I : V[st[idx]-'a']){
			if(K.count(I)==1)
				J.insert(I);
		}
		K = J;
		if (K.size()==0)
		{
			rep()
		}
		fun(idx+1,1);
	}
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("../../../input","r",stdin);
		freopen("../../../output","w",stdout);
    	// #define mx 100005
    #else
		// #define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[mx];
	string X,Y,Z;
	memset(A,-1,sizeof(A));
	
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>t;
	
	while(t--){
	
		rep(i,0,20)	V[i].clear();

		f=0;
		r=0;
	
		cin>>n>>k;
		cin>>st;
		N=n;
		rep(i,0,n){
			cin>>Y;
			for(auto P:Y){
				V[P-'a'].pb(i);
			}
		}
		x = 0;
		while(x<n){
			x = fun(x,0);
		}
		
		cout<<"\n";	
	}

	return 0;
}