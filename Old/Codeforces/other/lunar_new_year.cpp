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
pl A[mx];
ll B[mx];
ll C[mx];

int main(int argc, char const *argv[])
{
	
//	cout<<"O/p\n";

	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	
		f=0;
		r=0;
		cin>>n>>m;
		
		//}
		rep(i,0,n){
			cin>>B[i];
		}
		rep(i,0,n){
			cin>>A[i].f;
			C[i]=A[i].f;
			A[i].s=i;
		}
		sort(A,A+n);
		p=0;
		while(m--){
			r=0;
			cin>>a>>b;
			a--;
			//cout<<a<<"\n";
			if (b<=B[a])
			{
				cout<<C[a]*b<<"\n";
				B[a]-=b;
			}
			else{
				r+=B[a]*C[a];
				b-=B[a];
				B[a]=0;
//				cout<<r<<" "<<b<<" ";
				while(b!=0&&p!=n){
//					cout<<A[p].s<<" "<<B[A[p].s]<<" ";
					if (b<=B[A[p].s])
					{
						B[A[p].s]-=b;
						r+=b*A[p].f;
						b=0;
					}else{
						r+=B[A[p].s]*A[p].f;
						b-=B[A[p].s];
						B[A[p].s]=0;
						p++;
					}
				}
				if(b==0){
					cout<<r<<"\n";
				}
				else{
					cout<<0<<"\n";
				}
			}	
		}
//		cout<<r<<"\n";
	return 0;
}