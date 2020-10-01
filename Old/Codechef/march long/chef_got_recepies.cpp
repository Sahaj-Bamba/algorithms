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

//ll hash[64]={0};

int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z,result;
	ll n,m,p,q,t,sum,hash[64];
	char A[mx];
	char B[6]="aeiou";
	ll C[7]={0};
	cin>>t;
	while(t--){
		// cout<<(18|30);
		mem(hash,0);
		mem(C,0);
		f=0;
		r=0;
		cin>>m;
		//cout<<m<<" ";
		while(m--){
			//cout<<i<<" ";
			cin>>A;
			
			mem(C,0);
			n=strlen(A);
			x=0;
			rep(i,0,n){
				if(A[i]==B[0]){
					if (C[0]==0)
					{
						C[0]=1;
						x+=(1<<4);
					}
				}
				if(A[i]==B[1]){
					if (C[1]==0)
					{
						C[1]=1;
						x+=(1<<3);
					}
				}
				if(A[i]==B[2]){
					if (C[2]==0)
					{
						C[2]=1;
						x+=(1<<2);
					}
				}
				if(A[i]==B[3]){
					if (C[3]==0)
					{
						C[3]=1;
						x+=(1<<1);
					}
				}
				if(A[i]==B[4]){
					if (C[4]==0)
					{
						C[4]=1;
						x+=1;
					}
				}
			}
			hash[x]++;
			// cout<<A<<" "<<x<<"\n";
		}
		sum=0;
		// rep(i,0,64){
		// 	sum+=hash[i];
		// }
		result=0;
		
		rep(i,0,32){
			rep(j,i+1,32){
				if((i|j)==31){
					if(i!=j)
						result+=hash[i]*hash[j];
					else{
						result+=(hash[i]*(hash[i]-1))/2;
					}
					// cout<<hash[i]<<" "<<hash[j]<<" "<<i<<" "<<j<<" "<<result<<"\n";
				}
			}
		}
		cout<<result<<"\n";
		// result+=hash[bin_long(11111)]*(sum-1);
		// a=0;
		// rep(i,bin_long(10000),bin_long(11111)){
		// 	a+=hash[i];
		// }
		// result+=hash[bin_long(01111)]*(a);
		// a=0;
		// rep(i,bin_long(01000),bin_long(01111)){
		// 	a+=hash[i];
		// }
		// result+=hash[bin_long(10111)]*(a);
		// a=0;
		// rep(i,bin_long(01000),bin_long(01111)){
		// 	a+=hash[i];
		// }
		// result+=hash[bin_long(10111)]*(a);
		// a=0;
		// rep(i,bin_long(01000),bin_long(01111)){
		// 	a+=hash[i];
		// }
		// result+=hash[bin_long(10111)]*(a);

	}


	return 0;
}