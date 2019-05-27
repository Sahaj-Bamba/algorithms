#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1005
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
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	char A[mx][mx];
	char Res[mx];
	ll B[mx];
	ll C[300];
	cin>>t;
	rep(x,0,t){
		p=0;
		f=0;
		r=0;
		cin>>n;
		rep(i,0,n){
			cin>>A[i];
			B[i]=strlen(A[i]);
			f=max(f,B[i]);
		}
		
		mem(C,0);	
		rep(i,0,501){
			a=0;
			b=0;
			c=0;
			//cout<<"--"<<C[0]<<" "<<C[1]<<" "<<C[3]<<" \n";
			rep(j,0,n){
				if(C[j]==0){
					if ( A[j][i%B[j]]=='R')
					{
						a=1;
					}else if ( A[j][i%B[j]]=='P')
					{
						b=1;
					}else{
						c=1;
					}
				}
			}
			//cout<<a<<" "<<b<<" "<<c<<" \n";
			if (a+b+c==3)
			{
				p=1;
				break;	
			}
			if(a+b+c==1){
				if(a==1){
					Res[i]='P';
				}
				else if(b==1){
					Res[i]='S';
				}else{
					Res[i]='R';
				}
				i++;
				p=2;
				break;
			}else if(a+b+c==0){
				p=3;
				break;
			}else{
			//cout<<"Hi";
				if(a==b){
					Res[i]='P';
					rep(k,0,n){
						if(A[k][i%B[k]]=='R'){
							C[k]=1;
						}
					}		
				}else if(b==c){
					Res[i]='S';
					rep(k,0,n){
						if(A[k][i%B[k]]=='P'){
							C[k]=1;
						}
					}
				}else{
					Res[i]='R';
					rep(k,0,n){
						if(A[k][i%B[k]]=='S'){
							C[k]=1;
						}
					}
				}
				//cout<<" -- "<<A[j]<<" -- "<<j<<"\n";
			}
			if(p!=0){
				break;
			}
		}
		cout<<"Case #"<<x+1<<": ";
		if(p==1 || p==0)
		cout<<"IMPOSSIBLE";
		else{
			rep(j,0,i){
				cout<<Res[j];
			}
		}
		cout<<"\n";
	}

	return 0;
}