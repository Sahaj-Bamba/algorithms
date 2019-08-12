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
string A;
string B;

// ll fun(ll idx){
// 	if (idx == -1)
// 	{
// 		return 0;
// 	}

// 	if (A[idx] == '0')
// 	{
// 		if (B[idx] == '0')
// 		{
// 			return fun(idx-1);
// 		}else{
// 			return 1 + fun(idx - 1);
// 		}
// 	}
// }

	
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
	ll n1,n2;
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>t;
	
	while(t--){
		cin>>A;
		cin>>B;
		reverse(A.begin(), A.end());
		reverse(B.begin(), B.end());
		n=B.size();
		k=0;
		j=0;
		f=0;
		x=0;
		rep(i,0,n){
			if (B[i]=='1')
			{
				r=i;
				break;
			}
		}
		n=A.size();
		rep(i,0,n){
			if (A[i]=='1')
			{
				if (i>=r)
				{
					x=i-r;
					break;
				}
			}
		}



		cout<<x<<"\n";
	}

	return 0;
}