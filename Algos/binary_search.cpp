#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005

#define rep(i,n) for(i=0;i<n;i++)
#define invrep(i,n) for (i = n-1; i >=0 ; --i)

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

ll A[mx];
ll n,m;

int fun(ll M){
	ll i,j,k,r=0;
	k=M;
	rep(i,n){
		if (r==m)
		{
			return 0;
		}
		if(A[i]<=k){
			k-=A[i];
		}else{
			r++;
			i--;
			k=M;
		}
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,t,x,y,z,p,q;
	ll L,R,M;
	
		f=0;
		r=0;
		cin>>n>>m;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
			r+=A[i];
		}
		
		L=1;
		R=r;
		ll ans=0;
        //cout<<r<<"\n";
		while(L<=R){
			M=(L+R)/2;
			//cout<<M<<"\t";
			if (!(fun(M)))
			{
				L=M+1;
				//cout<<"right";
			}
			else
			{
			    ans=M;
				R=M-1;
				//cout<<"left";
			}
			//cout<<"\n";
		}
		cout<<ans<<"\n";
//	}
	return 0;
}