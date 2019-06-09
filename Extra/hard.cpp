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

int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll A[mx];
	ll B[mx];
	memset(A,-1,sizeof(A));
	memset(B,0,sizeof(B));
	string st[mx];

	cin>>n;
	rep(i,0,n){
		cin>>A[i];
	}
	rep(i,0,n){
		cin>>st[i];
	}

	rep(i,1,n){
		if ((str[i]<str[i-1]))
		{
			reverse(str[i].begin(),str[i].end());
			if (str[i]>str[i-1])
			{
				B[i]=1;
				B[i+1]=-1;
				continue;
			}
			reverse(str[i].begin(),str[i].end());
			B[i]+=1;
			B[0]-=1;
			invrep(j,i+1,0){
				reverse(str[j].begin(),str[j].end());
				if (str[j]<=str[j+1])
				{
					continue;
				}
				else{
					cout<<-1;
					return 0;
				}
			}
		}
	}
	x=0;
	r=0;
	rep(i,0,n+2)
	{
		x+=B[i];
		if(x%2==0){
			continue;
		}else{
			r+=C[i];
		}
	}
	cout<<r<<"\n";
	return 0;
}