#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//print with endl
template <typename Arg1>
void pf(Arg1&& arg1)
{ cout<<arg1<<"\n";}
template <typename Arg1, typename... Args>
void pf(Arg1&& arg1, Args&&... args)
{ cout<<arg1<<"\n"; pf(args...); }

//print with space
template <typename Arg1>
void ps(Arg1&& arg1)
{ cout<<arg1<<" ";}
template <typename Arg1, typename... Args>
void ps(Arg1&& arg1, Args&&... args)
{ cout<<arg1<<" "; ps(args...); }

//printing via for loop
template <typename Arg1>
void pvs(Arg1&& arg1, ll n)
{ for(ll i=0;i<n;i++)ps(arg1[i]); }
template <typename Arg1>
void pvn(Arg1&& arg1, ll n)
{ for(ll i=0;i<n;i++)ps(arg1[i]); }



ll lcm(ll a,ll b) 
{ return (a*b)/__gcd(a,b); }


#define fast  ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);
#define MOD 1000000007 
#define MAX 1e9
#define MIN -1e9
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define repr(i,n) for(i=n-1;i>=0;i--)
#define pb push_back
#define mp make_pair 
#define all(a) a.begin(),a.end()
#define vl vector<ll>
#define vll vector<vl>
#define vs vector<string>
#define pl pair<ll,ll>
#define vpl vector<pl>
#define f first
#define s second
#define um unordered_map

void solve()
 {
     ll n,i,j,k;
     cin>>n;
     vl a(n);
     rep0(i,n)
     cin>>a[i];
     vl b;
     ll maxim=0,d=0;
     for(i=0;i<n;i++)
     {
         ll c1=0,c2=0;
         maxim=a[i];
         for(j=i-1;j>=0;j--)
         {
             if(a[j]>a[i])
             {
                 c1++;
             }
             if(a[j]>maxim)
             {
                 d=j;
                 maxim=a[j];
             }
         }
         ll k;
         for(j=i-1;j>=0;j--)
         {
             if(a[j]<=a[i])
             {
                 for(k=i+1;k<n;k++)
                 {
                     if(a[j]>a[k] && a[i]>a[k])
                     {c1++;
                     break;}
                 }
             }
         }
        // cout<<i<<" "<<c1<<" "<<maxim<<" ";
         for(j=i+1;j<n;j++)
         {
             if(a[j]<maxim)
             c2++;
         }
         
        // cout<<c2<<endl;
         b.pb(c1+c2+1);
     }
     
    //  for(i=0;i<b.size();i++)
    //  cout<<b[i]<<" ";
    //  cout<<endl;
     
     ll maxi=0,mini=1e10;
     for(i=0;i<b.size();i++)
     {
         if(b[i]>maxi)
         maxi=b[i];
         if(b[i]<mini)
         mini=b[i];
     }
     cout<<mini<<" "<<maxi<<endl;
}
int main()
{
    fast;
	ll t;
	cin>>t;
	while(t--)
	{
	   solve();
	}
}

