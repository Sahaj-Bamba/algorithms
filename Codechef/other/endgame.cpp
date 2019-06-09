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


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll A[mx];
	memset(A,-1,sizeof(A));

	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>a>>b;
		if(a==0&&b==0){
			cout<<"0\n";
			continue;
		}
		if(a==0||b==0){
			cout<<"-1\n";
			continue;
		}
		if (a>b)
		{
			c=a;
			a=b;
			b=c;
		}
		r=0;
		while(a<=b){
			while(a<b){
				r++;
				a*=2;
			}
			if(a==b){
				r+=a;
				break;
			}
			a/=2;
			b--;
			a--;
			//r++;
		}
		// if(a>b){
		// 	c=a;
		// 	a=b;
		// 	b=c;
		// }
		// x=b-a;
		// if(x<=a&&x!=0){
		// 	r=1;
		// }else{
		// 	while(a<=x){
		// 		x-=a;
		// 		a*=2;
		// 		r++;
		// 	}
		// 	if(a<b){
		// 		r++;
		// 	}else{
		// 		c=a;
		// 		a=b;
		// 		b=c;
		// 	}
		// }
		// r+=b;
		cout<<r<<"\n";	
	}

	return 0;
}