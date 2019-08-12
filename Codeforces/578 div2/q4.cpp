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

using namespace std;

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pl;

ld pi=2.0*acos(0.0);

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

// ll N;
// char A[2005][2005];
// ll K;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    	#define mx 100005
    #else
		#define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	// std::vector<ll> Row[2005];
	// std::vector<ll> Col[2005];
	ll RowDp[2005][2005]={{0}};
	ll ColDp[2005][2005]={{0}};
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	char ch;
	
		f=0;
		r=0;
	
		cin>>n>>k;
		rep(i,1,n+1){
			rep(j,1,n+1){
				cin>>ch;
				//cin>>A[i][j];
				if (ch == 'B')
				{
					// Row[i].pb(j);
					// Col[j].pb(i);
					RowDp[i][j] = 1;
					ColDp[i][j] = 1;
				}
			}
		}
		rep(i,1,n+1){
			rep(j,1,n+1){
				RowDp[i][j]+=RowDp[i][j-1];
			}
		}
		rep(i,1,n+1){
			rep(j,1,n+1){
				ColDp[j][i]+=ColDp[j-1][i];
			}
		}
	
		r=0;

		rep(i,1,n+1){
			//	cout<<RowDp[n][i];
			if (RowDp[i][n] == 0)
			{
				r++;
			}
			if (ColDp[n][i] == 0)
			{
				r++;
			}
		}
		//cout<<r<<" ";
		b=0;
		a=0;
		//cout<<n-k+1;
		// rep(i,1,n-k+2){
		// 	rep(j,1,n-k+2){
				// if(i==2&&j==3){
				// 	cout<<"hi";
				// }
		// i=j=1;
		// 		a=0;
		// 		rep(x,0,k){
		// 			if (RowDp[x+i][n] != 0)
		// 			{
		// 				if(RowDp[x+i][j+k-1]-RowDp[x+i][j-1] == RowDp[x+i][n]){
		// 					a++;
		// 				}
		// 			}
		// 			if (ColDp[n][x+j] != 0)
		// 			{
		// 				if (ColDp[i+k-1][x+j] - ColDp[i-1][x+j] == ColDp[n][x+j] )
		// 				{
		// 					a++;
		// 				}
		// 			}
		// 		}
		// 		b=max(a,b);
		// 	}
		// }



		rep(i,1,n-k+2){
			rep(j,1,n-k+2){
				// if(i==2&&j==3){
				// 	cout<<"hi";
				// }
				if (j!=1)
				{
					c=0;
					rep(x,0,k)
					if (RowDp[x+i][n] != 0)
						{
							if(RowDp[x+i][j+k-1]-RowDp[x+i][j-1] == RowDp[x+i][n]){
								c++;
							}
						}
					if (ColDp[n][j-1] != 0 && ColDp[i+k-1][j-1] - ColDp[i-1][j-1] == ColDp[n][j-1])
					{
						a--;
					}
					if (ColDp[n][j] != 0 && ColDp[i+k-1][j] - ColDp[i-1][j] == ColDp[n][j])
					{
						a++;
					}
				}else{
					a=c=0;
					rep(x,0,k){
						if (RowDp[x+i][n] != 0)
						{
							if(RowDp[x+i][j+k-1]-RowDp[x+i][j-1] == RowDp[x+i][n]){
								c++;
							}
						}
						if (ColDp[n][x+j] != 0)
						{
							if (ColDp[i+k-1][x+j] - ColDp[i-1][x+j] == ColDp[n][x+j] )
							{
								a++;
							}
						}
					}
				}
				b=max(a+c,b);
			}
		}


		cout<<r+b<<"\n";

	return 0;
}