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

ll fun(ll x,ll f){
	if(x==0){
		if(A[x]==1){
			return fun(x+1,1);
		}
	}
	if (x==N)
	{
		return 1;
	}
	if (f==1)
	{
		return 9*fun(x+1,f);
	}
	//if(A[x]!=0&&A[x]!=1)
		return max(A[x]*fun(x+1,0),(A[x]-1)*fun(x+1,1));

}

int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	
	cin>>n;
	x=n;
	i=0;
	while(x!=0){
		A[i++]=x%10;
		x/=10;
	}
	y=i;
	rep(i,0,y/2){
		t=A[i];
		A[i]=A[y-i-1];
		A[y-i-1]=t;
	}
	N=y;
	cout<<fun(0,0);

	// cin>>t;
	// while(t--){
	// 	f=0;
	// 	r=0;
	// 	cin>>n;
	// 	rep(i,0,n)	cin>>A[i];
	// 	sort(A,A+n);
	
	// 	cout<<r<<"\n";	
	// }

//	cout<<r<<"\n";
	return 0;
}