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

bool cm(string a, string b){
	if (a.find(b) == string::npos && b.find(a) == string::npos)
	{
		N=1;
		//cout<<"Gi";
		return true;
	}
	if (a.find(b) == string::npos)
	{
		return true;
	}
	return false;
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
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	string st;
	std::vector<string> V;
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
		f=0;
		r=0;
		
		N=0;

		cin>>n;
	
		rep(i,0,n){
			cin>>st;
			V.pb(st);
		}

		sort(V.begin(), V.end(), cm);

		if (N==1)
		{
			cout<<"NO";
		}else{
			cout<<"YES\n";
			rep(i,0,n){
				cout<<V[i]<<"\n";
			}
		}

		
	return 0;
}