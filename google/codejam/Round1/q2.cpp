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

	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,F;
	char A[mx][mx];
	char X[5];
	char lo;
	char Res[5];
	ll B[5];
	ll C[5];
	ll D[5][5];
	cin>>t>>F;
	rep(x,0,t){
		mem(A,'.');
		f=F;
		p=0;
		f=0;
		r=0;

		rep(i,0,119){
			rep(j,0,3){
				cout<<i*5+j+1;
				f--;
				cout.flush();
				cin>>A[i][j];
			}
		}
		mem(C,0);
		rep(j,0,3){
			mem(B,0);
			rep(i,0,119){
				B[A[i][j]-'A']++;
			}
			a=0;
			rep(i,1,5){
				if(B[i]<B[a]){
					a=i;
				}
			}
			Res[j]='A'+a;
			C[a]=1;
		}
		j=0;
		rep(i,0,5){
			if(C[i]==0){
				X[j++]='A'+i;
			}
		}
		mem(D,0);
		rep(i,0,119){
			if ( (A[i][0]==X[0]||A[i][1]==X[0]||A[i][2]==X[0]) && (A[i][0]==X[1]||A[i][1]==X[1]||A[i][2]==X[1]) )
			{
				continue;
			}
				rep(j,3,5){
					cout<<i*5+j+1;
					f--;
					cout.flush();
					cin>>A[i][j];
					D[j][A[i][j]-'A']++;
				}
		}
		if (D[3][X[0]-'A']<D[3][X[1]-'A'])
		{
			Res[3]=X[0];
		}else{
			Res[3]=X[1];
		}
		if (D[4][X[0]-'A']<D[4][X[1]-'A'])
		{
			Res[4]=X[0];
		}else{
			Res[4]=X[1];
		}

		while(f--){
			cout<<1;
			cout.flush();
			cin>>lo;
		}

			rep(i,0,5){
				cout<<Res[i];
			}
		
		cout.flush();
		cin>>lo;
		if(lo=='N'){
			break;
		}
	}

	return 0;
}