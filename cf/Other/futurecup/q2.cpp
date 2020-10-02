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

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("../../input","r",stdin);
    freopen("../../output","w",stdout);
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	char A[mx];
	char B[mx];
		f=-1;
		r=0;
		a=0;
		b=0;
		cin>>A;
		n=strlen(A);
		rep(i,0,n){
			if(A[i]=='a'){
				f=i;
				b++;
				
			}else{
				B[a++]=A[i];
			}
		}
		//cout<<f<<" ";
		j=n-1;
		while(j!=f){
			a--;
			j--;
		}
		//cout<<a;
		// rep(i,0,a){
		// 	cout<<B[i]<<" ";
		// }
		//cout<<f;
		//cout<<B<<" ";
		//cout<<a;
		rep(i,f+1,n){
			if(B[0]==A[i]){
				//cout<<i<<a<<" ";
				x=0;
				if(a==n-i){
					for(j=0;j<a;j++){
						if (B[j]!=A[i+j])
						{
							x=1;
							break;
						}
					}
					if (x==1)
					{
						B[a++]=A[i];
						// cout<<":(";
						// return 0;
					}else{
						rep(j,0,i){
							cout<<A[j];
						}
						return 0;
					}
				}
				else{
				B[a++]=A[i];
					
				}
				
			
			}else{
				B[a++]=A[i];
			}
		}
		
		if(b==n){
			cout<<A;
			return 0;
		}
		
		cout<<":(";


	return 0;
}