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
string S;
ll Dp[2][2][200005];

pl fun(ll w,ll s,ll idx){
	if (Dp[w][s][idx] != -1)
	{
		return Dp[w][s][idx];
	}
	if (idx == N)
	{
		/* code */
	}
	if (w==0)
	{
		mp(max(fun(1,s,idx).f+1),)
	}
}

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
	
	ll a,b,c,d,i,j,k,f,r,w,x,y,z;
	ll n,m,p,q,t,l;
	ll w2,x2,y2,z2;
	ll f1,f2,f3,f4;
	string A,B,C;
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>t;
	
	while(t--){
		A="";
		B="";
		C="";
		f=0;
		r=0;
	
		cin>>A;
		n=A.size();
		rep(i,0,n){
			if (A[i]=='W')
			{
				B+='W';
			}else if (A[i]=='S')
			{
				B+='S';
			}
		}
		S=B;
		N=B.size();
		mem(Dp,-1);
		a=fun(0,0,0);
		rep(i,0,n){
			if (A[i]=='D')
			{
				B+='W';
			}else if (A[i]=='A')
			{
				B+='S';
			}
		}
		S=B;	
		N=B.size();
		mem(Dp,-1);
		b=fun();
		





		// n = strlen(A);
		// a=0;
		// b=0;	
		// w=0;
		// x=0;
		// y=0;
		// z=0;

		// rep(i,0,n){
		// 	if (A[i]=='W')
		// 	{
		// 		a++;
		// 	}else if (A[i] == 'A')
		// 	{
		// 		b--;
		// 	}else if (A[i] == 'S')
		// 	{
		// 		a--;
		// 	}else{
		// 		b++;
		// 	}
		// 	w=max(w,a);
		// 	x=min(x,a);
		// 	y=max(y,b);
		// 	z=min(z,b);
		// }
		
		// a=0;
		// b=0;
		// w2=0;
		// x2=0;
		// y2=0;
		// z2=0;
		// f1=f2=f3=f4=0;

		// rep(i,0,n){
		// 	if (A[i]=='W')
		// 	{
		// 		a++;
		// 		if (a==w && f1==0)
		// 		{
		// 			f1=1;
		// 			a-=2;
		// 			i--;
		// 		}
		// 	}else if (A[i] == 'A')
		// 	{
		// 		b--;
		// 		if (b==z && f2 == 0) 
		// 		{
		// 			f2=1;
		// 			b+=2;
		// 			i--;
		// 		}
		// 	}else if (A[i] == 'S')
		// 	{
		// 		a--;
		// 		if (a==x && f3==0)
		// 		{
		// 			f3=1;
		// 			a+=2;
		// 			i--;
		// 		}
		// 	}else{
		// 		b++;
		// 		if (b==y && f4==0)
		// 		{
		// 			f4=1;
		// 			b-=2;
		// 			i--;
		// 		}
		// 	}
		// 	w2=max(w2,a);
		// 	x2=min(x2,a);
		// 	y2=max(y2,b);
		// 	z2=min(z2,b);
		}

		r = (min(w,w2) - max(x,x2) + 1) * (min(y,y2) - max(z,z2) + 1);
		cout<<r<<"\n";	
	}

	return 0;
}