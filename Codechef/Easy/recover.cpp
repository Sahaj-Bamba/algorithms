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

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("../../input","r",stdin);
    freopen("../../output","w",stdout);
    #endif
	fastIO
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll A[mx];
	memset(A,-1,sizeof(A));

	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>n;
		rep(i,0,n)	cin>>A[i];

		f=0;
		r=-1;
		d=A[1]-A[0];
		a=A[0];
		rep(i,0,n){
			if (A[i] != a)
			{
				f++;
				r=i-1;
			}
			a+=d;
		}
		if (f==1)
		{
			a=A[0];
			rep(i,0,n){
				cout<<a<<" ";
				a+=d;
			}
			cout<<"\n";
			continue;
		}else if (f==0)
		{
			rep(i,0,n) cout<<A[i]<<" ";
			cout<<"\n";
			continue;
		}
		f=0;
		r=-1;
		d=A[n-1]-A[n-2];
		a=A[n-1];
		invrep(i,n,0){
			if ((A[i]) != a)
			{
				f++;
				r=i-1;
			}
			a-=d;	
		}

			rep(i,0,n){
				a+=d;
				cout<<a<<" ";
			}
			cout<<"\n";
		
		
	}

	return 0;
}


// 6
// 4
// 1 2 3 4
// 4
// 1 2 3 5
// 4
// 1 2 4 5
// 4
// 1 3 3 4
// 4
// 3 2 3 5
// 4
// 0 2 5 4
