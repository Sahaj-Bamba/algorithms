#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
// #define mx 1000005
#define INF LLONG_MAX

#define debug(a) cout<<"\n----------------------"<<a<<"-------------------------"

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
	#ifndef ONLINE_JUDGE
		#define mx 1005
	#else
		#define mx 1000005
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	vector<pl> A;
	vector<pl> B;
	
		r=f=0;
		cin>>n>>m;
		rep(i,0,n){
			cin>>a>>b;
			A.pb(mp(a,b));
			B.pb(mp(b,a));
		}
		sort(A.begin(),A.end());
		sort(B.begin(),B.end());

		while(m--){
			cin>>a>>b;
			x = a - A[0].f +1;
			y = b - B[0].f +1;
			if(x<=y){
				if(x>0){
					r += x;
					rep(i,0,n){
						A[i].f+=x;
						B[i].s+=x;
					}
				}
			}else{
				if(y>0){
					r += y;
					rep(i,0,n){
						A[i].s+=y;
						B[i].f+=y;
					}
				}
			}
			sort(A.begin(),A.end());
			sort(B.begin(),B.end());
		}

		cout<<r<<"\n";


	return 0;
}