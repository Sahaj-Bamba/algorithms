#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 10000005

#define rep(i,n) for(i=1;i<=n;i++)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)

using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pl;

int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,f,i,j,k,r,t,n,x,y,z,p,q;
	ll A[mx];
	memset(A,-1,sizeof(A));

		f=0;
		r=0;
		cin>>n;
		j=0;
		rep(i,sqrt(n)){
			if (n%i==0)
			{
				a=n/i;
				b=(a*(2+(a-1)*i))/2;
				c=(i*(2+(i-1)*a))/2;
				A[j++]=b;
				if(b!=c)
					A[j++]=c;
			}
		}
		sort(A,A+j);
		for (int i = 0; i < j; ++i)
		{
			cout<<A[i]<<" ";
		}
		//cout<<r<<"\n";
	return 0;
}