#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	char A[100005];
	char B[100005];
	cin>>t;
	while(t--){
		r=0;
		cin>>n;
		cin>>A>>B;
		for (int i = 0; i < n; ++i)
		{
			a=B[i]-A[i];
			b=B[i]-(A[i]+13);
			if (a<0)
			{
				a+=26;
			}
			if (b<0)
			{
				b+=26;
			}
			b++;
			if (a<b)
			{
				r+=a;
			}else{
				r+=b;
			}
		}

		cout<<r<<"\n";
	}
	return 0;
}