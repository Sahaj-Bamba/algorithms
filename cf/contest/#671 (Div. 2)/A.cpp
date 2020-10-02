/*
	author: blair_
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

template <typename Arg1>
void prn(bool space, Arg1&& arg1)
{ cout<<arg1; if(space) cout<<" "; else cout<<"\n"; }
template <typename Arg1, typename... Args>
void prn(bool space, Arg1&& arg1, Args&&... args)
{ prn(space, arg1); prn(space, args...); }

ll mulmod(ll a,ll b,ll mod) 
{ ll res=0; a=a%mod; 
    while(b>0)
    { if(b%2==1) res=(res+a)%mod; 
      a=(a*2)%mod; b/=2; }
    return res % mod; } 

ll powmod(ll x,ll y,ll p) 
{ ll res=1; x=x%p;
	while(y>0) 
	{ if (y&1) res=(res*x)%p; 
	  y=y>>1; x=(x*x)%p; } 
	return res; } 

ll log(ll n, ll b)
{ ll c=0;
	while(n>(b-1))
	{ c++; n/=b; } return c; }

#define MOD 1000000007 //10^9+7
#define pi 3.14159265358979323846
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fd(i,n) for(i=n-1;i>=0;i--)
#define fn(i,s,d) for(i=s;i<d;i++)
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define sz(a) a.size()
#define pl pair<ll,ll>
#define vpl vector<pl>
#define vb vector<bool>
#define vl vector<ll>
#define vvl vector<vl>
#define vs vector<string>
#define ff first
#define ss second
#define um unordered_map
#define dsort(v) sort(v); reverse(v);
#define maxpq(v) priority_queue<v>
#define minpq(v) priority_queue<v,vector<v>,greater<v>>

//check overflow
void solve()
{
	ll i,j;
	ll n;
	cin>>n;
	string s;
	f0(i,n)
	{
		char c;
		cin>>c;
		s.pb(c);
	}
	if(n%2==1)
	{
		f0(i,n)
		{
			if((s[i]-'0')%2==1)
			{
				prn(0,1);
				return;
			}
			i++;
		}
		prn(0,2);
		return;
	}
	else
	{
		f0(i,n)
		{
			i++;
			if((s[i]-'0')%2==0)
			{
				prn(0,2);
				return;
			}
		}
		prn(0,1);
		return;
	}
}

int main()
{

	#ifdef Deeksha
		freopen("input.txt", "r", stdin);
	#endif
	std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	// solve();/* 
	ll t;
	cin>>t;
	for(ll tt=1;tt<=t;tt++)
	{
		// cout<<"Case #"<<tt<<": ";
		solve();
	}
	//*/
}

