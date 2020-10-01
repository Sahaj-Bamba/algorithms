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
typedef long double ld;
ld pi=2.0*acos(0.0);

typedef long long int ll;
typedef pair<ll,ll> pl;

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	set<ll> A;
	cin>>n;
	ll l,ans;
	l=0;
	r=1000000000;
	ans=-1;
	q=60;
	while(l<=r){
		m=(l+r)/2;
		cout<<"> "<<m<<"\n";
		q--;
		cout.flush();
		cin>>b;
		if(b){
			l=m+1;
		}else{
			ans=m;
			r=m-1;
		}
	}
	A.insert(ans);
	while(q--){
		m=rng32()%n+1;
		cout<<"? "<<m<<"\n";
		cout.flush();
		cin>>a;
		A.insert(a);
	}
	
	d=*(A.begin());
	auto J=A.begin();
	j=(*(++J));
	d=__gcd(j-d);
	for(auto i=(A.begin());i != A.end();i++){
		d=__gcd(d,*i-j);
		j=*i;
	}

	a=ans-(n-1)*d;

	cout<<"! "<<a<<" "<<d<<"\n";
	cout.flush();

	return 0;
}