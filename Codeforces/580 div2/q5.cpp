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

ll N;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    	#define mx 100005
    #else
		#define mx 1000005
    #endif

	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[100][100];
	
	memset(A,-1,sizeof(A));
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>n;

	A[1][1]=1;
	A[n+1][n+1]=0;

	cout<<"? 1 1 3 1\n";
	cout.flush();
	cin>>x;
	if (x == 0)
	{
		A[3][1] = !A[1][1];
	}else{
		A[3][1] = A[1][1];
	}

	rep(i,0,n-1){
		cout<<"? 1 "<<i+1<<" 3 "<<i+2<<"\n";
		cout.flush();
		cin>>x;
		if (x == 0)
		{
			A[3][i+2] = !A[1][i+1];
		}else{
			A[3][i+2] = A[1][i+1];
		}

		cout<<"? 1 "<<i+2<<" 3 "<<i+2<<"\n";
		cout.flush();
		cin>>x;
		if (x == 0)
		{
			A[1][i+2] = !A[3][i+2];
		}else{
			A[1][i+2] = A[3][i+2];
		}
	}
	// cout<<"hi";
	cout<<"? 2 "<<"1"<<" 3 "<<"2\n";
	cout.flush();
	cin>>x;
	if (x == 0)
	{
		A[2][1] = !A[3][2];
	}else{
		A[2][1] = A[3][2];
	}

	rep(i,0,n-1){
		cout<<"? 1 "<<i+1<<" 2 "<<i+2<<"\n";
		cout.flush();
		cin>>x;
		if (x == 0)
		{
			A[2][i+2] = !A[1][i+1];
		}else{
			A[2][i+2] = A[1][i+1];
		}
	}
	// cout<<"hi";
	rep(i,3,n){
		cout<<"? "<<i-1<<" "<<"1"<<" "<<i+1<<" "<<"1\n";
		cout.flush();
		cin>>x;
		if (x == 0)
		{
			A[i+1][1] = !A[i-1][1];
		}else{
			A[i+1][1] = A[i-1][1];
		}

		rep(j,1,n){

			cout<<"? "<<i<<" "<<j<<" "<<i+1<<" "<<j+1<<"\n";
			cout.flush();
			cin>>x;
			if (x == 0)
			{
				A[i+1][j+1] = !A[i][j];
			}else{
				A[i+1][j+1] = A[i][j];
			}

		}
	}

	cout<<"!\n";
	cout.flush();
	rep(i,1,n+1){
		rep(j,1,n+1){
			cout<<A[i][j];
		}
		cout<<"\n";
	}

	cout.flush();

	return 0;
}