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

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[mx];
	
	memset(A,-1,sizeof(A));
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	char ch1,ch2;
	std::vector<ll> V;
	cin>>n>>k;
	
	cin>>ch1;
	a=1;
	rep(i,1,n){
		cin>>ch2;
		if (ch1 == ch2)
		{
			a++;
		}else{
			V.pb(a);
			a=1;
		}
		ch1 = ch2;
	}

	V.pb(a);

	n = V.size();
	// rep(i,0,n){
	// 	cout<<V[i];
	// }
	y = k;
	r=0;

	x=0;
	a=0;
	// z+=V[0];
	z=0;
	rep(i,0,n){
		if (i%2 == 1)
		{
			if (y>=V[i])
			{
				y-=V[i];
			}else{
				break;
			}
		}
		z += V[i];
	}
	b=i;
	r = max(r,y+z);
	//cout<<r<<" ";
	//cout<<b<<" ";
	while(b<n){
		z-=A[a];
		a++;
		z-=A[a];
		y+=A[a];
		a++;
		while(b<n){
			if (b%2 == 1)
			{
				if (y>=V[b])
				{
					y-=V[b];
				}else{
					break;
				}
			}
			z += V[b];
			b++;
		}
		r = max(r,y+z);
	}

	y = k;
	
	x=0;
	a=0;
	// z+=V[0];
	//cout<<r<<" ";
	z=0;
	rep(i,0,n){
		if (i%2 == 0)
		{
			if (y>=V[i])
			{
				y-=V[i];
			}else{
				break;
			}
		}
		z += V[i];
	}
	b=i;
	r = max(r,y+z);
	while(b<n){
		z-=A[a];
		a++;
		z-=A[a];
		y+=A[a];
		a++;
		while(b<n){
			if (b%2 == 0)
			{
				if (y>=V[b])
				{
					y-=V[b];
				}else{
					break;
				}
			}
			z += V[b];
			b++;
		}
		r = max(r,y+z);
	}



	// cout<<"\n";
	// rep(i,0,n){
	// 	a=k;
	// 	b=0;
	// 	// cout<<a<<" ";
	// 	rep(j,i,n){
	// 		if(j%2 == i%2){
	// 			if(a>=V[j]){
	// 				a-=V[j];
	// 			}
	// 			else{
	// 				b+=a;
	// 				break;
	// 			}
	// 		}
	// 		b+=V[j];
	// 	}
	// 	if(i!=0){
	// 		b+=V[i-1];
	// 	}
	// 	// cout<<b<<" ";
	// 	r=max(r,b);
	// }
	// r=max(r,V[0]);

	cout<<r<<"\n";

	return 0;
}