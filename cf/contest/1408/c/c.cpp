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
	ll a,b,c,i,j,k,f;
	ll n,m,p,q,t;
	double vl,vr,time,l,r,x,y,z;
	ll A[mx];
	memset(A,-1,sizeof(A));
	cin>>t;
	while(t--){
		r=f=0;
		cin>>n>>k;
		rep(i,0,n){
			cin>>A[i];
		}
		vl = 1.0;
		vr = 1.0;
		a = 0;
		b = n-1;
		l = 0;
		r = k;
		time = 0;
		while(l<=r && a<=b){
						// if(a!=b){
				x = (A[a] - l)/vl;
				y = (r - A[b])/vr;
				if(x<=y){
					a++;
					r -= vr * x;
					l += vl * x;
					vl++;
					time += x; 
				}else if(x>y){
					b--;
					r -= vr * y;
					l += vl * y;
					vr++;
					time += y; 
				}
			// cout<< l << " " << r << " "<< vl <<" "<< vr <<" "<<time<<" \n";
			// }
		}
		if(l<r){
			time += (r-l)/(vr+vl);
		}

		cout<<prec(15)<<time<<"\n";

	}

	return 0;
}