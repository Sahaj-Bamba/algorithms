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
struct str{
	ll a;
	ll b;
	ll c;
	ll d;
};
bool comp(str a, str b) 
{ 
    if (a.a<b.a)
     {
     	return true;
     }else if(a.a>b.a){
     	return false;
     }else{
     	 if (a.b<b.b)
	     {
	     	return true;
	     }else if(a.b>b.b){
	     	return false;
	     }else{
	     	  if (a.c<b.c)
		     {
		     	return true;
		     }else if(a.c>b.c){
		     	return false;
		     }else{
		     	    if (a.d<b.d)
				     {
				     	return true;
				     }else if(a.d>b.d){
				     	return false;
				     }else{
				     	return false;
				     }
		     }
	     }
     }
} 
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,t,n,m,x,y,z,p,q;
	//ll A[mx];
	str V[mx];
	pl V2[mx];
	// std::vector<ll> V[mx];
	// std::vector<ll> V2[mx];
	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>a>>b;
			V[i].a=a;
			V[i].b=b;
			V[i].c=i;
		}
		//break;
		sort(V, V+n,comp);
		
		V[0].d=1;
		f=0;
		//break;
		b=V[0].b;
		for(i=1;i<n;i++){
			if (V[i].a==V[i-1].a)
			{
				V[i].d=1;
			}
			else if(V[i].a>b){
				f=1;
				V[i].d=2;
				break;
			}else{
				V[i].d=1;
			}
			if (V[i].b>b)
			{
				b=V[i].b;
			}
		}
		if(f==0){
			cout<<"-1";
		}else{
			//break;
			while(i<n){
				V[i].d=2;
				i++;
				
			}
			rep(i,n){
				V2[i].f=(V[i].c);
				V2[i].s=(V[i].d);
			}
			sort(V2, V2+n);
			rep(i,n) cout<<V2[i].s<<" ";
		}
		//cout<<r<<"\n";
	
		cout<<"\n";
	}
	return 0;
}