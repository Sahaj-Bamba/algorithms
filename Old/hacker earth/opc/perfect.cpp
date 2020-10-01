#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	ll A[100005];
	cin>>n>>k;
	a=n-k;
	if (a<0)
	{
		cout<<"0";
	}
	else{
		r=1;
		for (int i = n; i >a ; --i)
		{
			r*=i;
			r%=mod;
		}
		for (int i = 0; i < a; ++i)
		{
			r*=k;
			r%=mod;
		}
		cout<<r;
	}

	return 0;
}