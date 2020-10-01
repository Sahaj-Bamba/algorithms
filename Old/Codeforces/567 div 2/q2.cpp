#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007

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
	#define mx 100005
    #else
	#define mx 1000005
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	char A[mx];
	ll B[mx];
	memset(B,0,sizeof(B));

	cin>>n;
	cin>>A;

	if (n%2==0)
	{
		r=n/2;
		l=0;
		a=b=r;
	}else{
		r=n/2;
		a=r;
		b=r+1;
		l=0;
	}
		f=0;
		if (A[a]=='0'&&A[b]=='0')
		{
			f=1;
			a--;
			b++;
		}
		if (A[a]=='0')
		{
			r=b;
		}else if (A[b]=='0')
		{
			r=a;
		}else{
			if (A[0]>A[a])
			{
				r=a;	
			}else if (A[0]<A[a])
			{
				r=b;
			}else{
				x=0;
				y=a;
				while(A[x]==A[y]){
					x++;
					y++;
					if (y>=n)
					{
						break;
					}
				}
				if (A[x]>A[y])
				{
					r=a;
				}else{
					r=b;
				}
			}
		}
		
		k=mx-1;
		i=r-1;
		j=n-1;
		//cout<<i<<" "<<j<<" "<<k<<" ";
		while(i!=-1&&j!=r-1){
			B[k]+=((A[i]-'0')+(A[j]-'0'));
			k--;
			i--;
			j--;
		}
		while(i!=-1){
			B[k]+=A[i]-'0';
			i--;
			k--;
		}
		while(j!=r-1){
			B[k]+=A[i]-'0';
			k--;
			j--;
		}
		for(i=mx-1;i>k;i--)
			if(B[i]>=10){
				B[i-1]+=B[i]/10;
				B[i]%=10;
			}

		rep(i,k+1,mx){
			cout<<B[i];
		}
	

	return 0;
}