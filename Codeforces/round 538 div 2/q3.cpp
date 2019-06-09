#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005

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

using namespace std;



typedef long long int ll;
typedef pair<ll,ll> pl;


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	pl A[mx];
	ll C[mx];
	map<ll,ll> mp;
	cin>>n>>m>k;
	set<ll> B;
	rep(i,0,n){
		cin>>A[i].f;
		C[i]=A[i];
		A[i].s=i;
	}
	sort(A,A+n,greater<pl>());
	r=0;
	for(i=0;i<m*k;i++){
		r+=A[i].f;
		//B.insert(A[i].f);
		if(mp.count(A[i].f)==0){
			mp.insert({A[i].f,1});
		}
		else{
			mp[A[i].f]++;
		}
	}
		cout<<r<<"\n";
	x=0;
	y=0;
	k--;
	rep(i,0,n){
		if (mp.count(C[i])!=0&&mp[C[i]]!=0)
		{
			x++;
			mp[C[i]]--;
		}
		if (x==m)
		{
			cout<<i+1;
			y++;
			x=0;
		}
		if(y==k){
			break;
		}
	}

	return 0;
}