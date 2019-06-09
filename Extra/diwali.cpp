#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	char A[1000005];
	cin>>t;
	while(t--){
		r=0;
		cin>>n;
		cin>>A;
		r=0;
		a=0;
		for (int i = 0; i < n; ++i)
		{
			if (A[i]=='0')
			{
				a++;
			}
			else{
				a--;
			}
			if (a<0)
			{
				a=0;
			}
			if (a>r)
			{
				r=a;
			}
		}
		if (r==0)
		{
			r=-1;
		}
		cout<<r<<"\n";
	}
	return 0;
}