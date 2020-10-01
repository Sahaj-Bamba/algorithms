#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005

#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)

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


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll R,n,m,p,q,t;
	char A[mx];
	ll hash[26]={0};
	cin>>t;
	while(t--){
		rep(i,0,26) hash[i]=0;
		r=0;

		cin>>A;
		n=strlen(A);
		x=0;
		rep(i,0,n){
			if (hash[A[i]-'A']==0)
			{
				x++;
			}
			hash[A[i]-'A']++;	
		}

		sort(hash,hash+26);
		R=999999999;
		//cout<<R;
		invrep(i,x+1,1){
			if (n%i==0)
			{
				r=0;
				a=n/i;
				//x=i;
				j=0;
				invrep(j,26,26-i){
					if (hash[j]<a)
					{
						r+=a-hash[j];
					}
				}
				R=min(R,r);
			}
		}
		if(n<=26){
			R=min(R,n-x);
		}
		// a=n/i;
		// x=i;
		// j=0;
		// invrep(i,26,26-x){
		// 	if (hash[i]<a)
		// 	{
		// 		r+=a-hash[i];
		// 	}
		// }

		// invrep(i,26-x,0){
		// 	r+=hash[i];
		// }
		cout<<R<<"\n";
	}
	return 0;
}