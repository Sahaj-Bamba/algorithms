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

using namespace std;

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pl;

ld pi=2.0*acos(0.0);

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N;

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
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[mx];
	
	memset(A,-1,sizeof(A));
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	std::map<ll, ll> M;
	std::vector<ll> V;
	cin>>t;
	
	while(t--){
	
		f=0;
		r=0;
		M.clear();
		V.clear();
		cin>>n;
		rep(i,0,4*n){
			cin>>x;
			M[x]++;
		}
		//cout<<"Hi";
		f=0;
		for(auto X : M){
			if (X.s % 2 != 0)
			{
				f=1;
				break;
			}
		}
		if (f==1)
		{
			cout<<"NO\n";
			continue;
		}
		for(auto X : M){
			V.pb(X.f);
		//	cout<<X.f<<" ";
		}
		n=V.size();
		a=V[0]*V[n-1];
		f=0;


		rep(i,0,n/2){
			if (V[i]*V[n-(i+1)] != a)
			{
				f=1;
				break;
			}
			if (M[V[i]] != M[V[n-(i+1)]])
			{
				f = 1;
				break;
			}
		}
	
		if (f==0 && n%2 != 0)
		{
			if (M[V[(n/2)]]%4!=0)
			{
				f=1;
			}
		}
	
		if (f==1)
		{
			cout<<"NO\n";
			continue;
			/* code */
		}else{
			cout<<"YES\n";
			continue;
		}


	}

	return 0;
}