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
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll l1,l2,r1,r2;
	ll A[mx];
	memset(A,-1,sizeof(A));

	cin>>n>>a>>x>>b>>y;


	if (a==b)
	{
		cout<<"YES";
	}else if (a<b)
	{
		r=(a+b);
		if ((r)%2!=0)
		{
			cout<<"NO";
		}else{

			f=0;
			r=0;
	
			if (a<=x)
			{
				if (r/2 <= x )
				{
					f=1;
				}else{
					f=0;
				}
			}else{
				f=1;
			}

			if (y<=b)
			{
				if (y<=r/2)
				{
					r=1;
				}else{
					r=0;
				}
			}else{
				r=1;
			}

			if (f&&r)
			{
				cout<<"YES";
			}else{
				cout<<"NO";
			}
		}
	}else{
		if (y<x)
		{
			cout<<"YES";
		}else{
			cout<<"NO";
		}
	}


		
	return 0;
}