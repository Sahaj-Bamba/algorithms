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

int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,f,i,j,k,r,t,n,x,y,z,p,q;
	ll A[mx];
	ll B[mx];
	memset(A,-1,sizeof(A));
	cin>>n>>q;
	
	rep(i,n){
		cin>>A[i];
	}
	rep(i,n){
		cin>>B[i];
	}

	for (int i = 1; i < n; i+=2)
	{
		a=A[i];
		A[i]=B[i];
		B[i]=a;
	}

	for(i=1;i<n;i++){
		A[i]+=A[i-1];
		B[i]+=B[i-1];
	}

	rep(i,q){

		cin>>a>>b>>c;
		b--;
		c=c-b;
		r=0;

		if (a==1&&b%2==0||a==2&&b%2==1)
		{
			if(b==0){
				cout<<A[b+c-1]<<"\n";
			}
			else{
				cout<<A[b+c-1]-A[b-1]<<"\n";
				continue;			
			}
		}
		else{
			if(b==0){
				cout<<B[b+c-1]<<"\n";
			}
			else{
				cout<<B[b+c-1]-B[b-1]<<"\n";
				continue;			
			}
		}

/*		if(a==1){
			if(b%2==0){
				if (c%2==0)
				{
					if(b==0){
						cout<<A[b+c-2]+B[b+c-2]<<"\n";
						continue;
					}
					r=A[b+c-2]-A[b-2];
					r+=B[b+c-1]-B[b-1];
					cout<<r;
					continue;
				}
				else{
					if(b==0){
						cout<<A[b+c-1]+B[b+c-2]<<"\n";
						continue;
					}
					r=A[b+c-1]-A[b-2];
					r+=B[b+c-3]-B[b-1];
					cout<<r;
					continue;	
				}
			}
			else{

			}
		}
		else{
			if(b%2==0){

			}
			else{

			}
		}
*/

	}

	return 0;
}