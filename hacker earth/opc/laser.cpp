#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
#define mod 1000000007
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n,x,y;
	ll A[100005];
	ll B[100005];
	cin>>n;
	
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i]>>B[i];
	}
	sort(A,A+n);
	sort(B,B+n);
	x=1;
	y=1;
	for (int i = 1; i < n; ++i)
	{
		if (A[i] != A[i-1])
		{
			x++;
		}
		if (B[i] != B[i-1])
		{
			y++;
		}
	}

	a=((x)*(x-1)/2)%mod;
	b=((y)*(y-1)/2)%mod;
	r=(a*b)%mod;
	cout<<r;

	return 0;
}