#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005

#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)

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

ll V[mx];
ll len=1;
ll bs(ll a){
	ll l,r,m,ans=len;
	l=0;
	r=len-1;
	while(l<=r){
		m=(l+r)/2;
		if(V[m]<a){
			l=m+1;
		}else{
			ans=m;
			r=m-1;
		}
	}
	return ans;
}

ll longest_increasing_subsequence(){
		ll i;
		V[0]=(A[0]);
		len=1;
		rep(i,1,n){
			if(V[len-1]<A[i]){
				V[len++]=(A[i]);
				continue;
			}
			if(A[i]<V[0]){
				V[0]=A[i];
			}
			V[bs(A[i])]=A[i];
		}
		return len;
}

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
		cin>>n;
		rep(i,0,n)	cin>>A[i];
		

		cout<<longest_increasing_subsequence()<<"\n";
	}
	return 0;
}