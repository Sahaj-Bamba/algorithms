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
	
#define mx 1000005
    
using namespace std;

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pl;

ld pi=2.0*acos(0.0);

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		// freopen("../../../input","r",stdin);
		// freopen("../../../output","w",stdout);
    	// #define mx 100005
    #else
		// #define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	vector<ll> V;
	ll B[mx];
	char C,D;
	// memset(A,-1,sizeof(A));
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	
		f=0;
		r=0;
	
		cin>>n;
		z=n;
		r=((n)*(n-1))/2;
		cin>>D;
		a=1;
		rep(i,1,n){
			cin>>C;
			if (C==D)
			{
				a++;
			}else{
				V.pb(a);
				a=1;
				D=C;
			}
		}
		V.pb(a);
		n=V.size();
		
		// rep(i,0,n){
		// 	cout<<V[i];
		// }

		// cout<<r;




		B[0]=V[0];	
		rep(i,1,n){
			B[i]=B[i-1]+V[i];
		}
		rep(i,0,n){
			r-=z-B[i];
			rep(j,i+2,n){
				if (j+1>=n || j+2>=n)
				{
					r++;
					break;
				}
				if (V[j]!=1)
				{
					r++;
					break;
				}
				if (V[j+1]<V[j-1])
				{
					r++;
					break;
				}
				if (V[j+1]>V[j-1])
				{
					r++;
					break;
				}
				if (V[j+1]==V[j-1])
				{
					r++;
					j++;
					continue;
				}
			}
		}



		// cout<<" "<<r;


		reverse(V.begin(), V.end());


		B[0]=V[0];	
		rep(i,1,n){
			B[i]=B[i-1]+V[i];
		}
		rep(i,0,n){
			r-=z-B[i];
			rep(j,i+2,n){
				if (j+1>=n || j+2>=n)
				{
					r++;
					break;
				}
				if (V[j]!=1)
				{
					r++;
					break;
				}
				if (V[j+1]<V[j-1])
				{
					r++;
					break;
				}
				if (V[j+1]>V[j-1])
				{
					r++;
					break;
				}
				if (V[j+1]==V[j-1])
				{
					r++;
					j++;
					continue;
				}
			}
		}




		// cout<<" "<<r;



		rep(i,0,n){
			r+=n-(i+1);
			rep(j,i+2,n){
				if (j+1>=n || j+2>=n)
				{
					r--;
					break;
				}
				if (V[j]!=1)
				{
					r--;
					break;
				}
				if (V[j+1]<V[j-1])
				{
					r--;
					break;
				}
				if (V[j+1]>V[j-1])
				{
					r--;
					break;
				}
				if (V[j+1]==V[j-1])
				{
					r--;
					j++;
					continue;
				}
			}
		}

		cout<<r<<"\n";

		
	return 0;
}