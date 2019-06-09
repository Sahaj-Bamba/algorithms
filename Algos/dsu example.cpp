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

ll N;
ll A[mx];
ll Parent[mx];

ll initialise(){
	ll i;
	rep(i,0,N){
		Parent[i]=i;
	}
}

ll dsufun(ll a,ll b){
	if (A[a]>A[b])
	{
		return 1;
	}else if (A[a]<A[b])
	{
		return -1;
	}else{
		return 0;
	}
}

ll parent(ll ind){
	if (ind==Parent[ind])
	{
		return ind;
	}
	return Parent[ind] = parent(Parent[ind]);
}

bool join(ll a, ll b){
	ll x,y;
	x=parent(a);
	y=parent(b);
	if (x==y)
	{
		return false;
	}
	switch (dsufun(x,y))
	{
		case -1: Parent[x]=y;
				break;
		case 1: Parent[y]=x;
				break;
	}
	return true;
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
	
	cin>>t;
	while(t--){

		f=0;
		r=0;

		cin>>n;
		N=n;
		n++;
		N++;
		initialise();
		
		rep(i,1,n)	cin>>A[i];
		
		cin>>q;
		while(q--){
		
			cin>>a;
			if (a==0)
			{
				cin>>b>>c;
				if (!(join(b,c)))
				{
					cout<<"Invalid query!\n";
				}
			}else{
				cin>>b;
				cout<<parent(b)<<"\n";
			}
		
		}

		
	}

	return 0;
}