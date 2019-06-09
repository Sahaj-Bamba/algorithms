#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	ll a,b,c,i,j,k,p,q,r,t,n,x,y,z;
	ll A[100005];
	cin>>t;
	while(t--){
		cin>>a,b,c;
		k=0;
		x = __builtin_popcount (a);
		y = __builtin_popcount (b);
		z = __builtin_popcount (c);
		for (i = 1; i <= c/2; ++i)
		{
			p = __builtin_popcount (i);
			q = __builtin_popcount (c-i);
			if (p==x&&q==y)
			{
				k++;
			}
			if (q==y&&q==x)
			{
				k++;
			}
		}
		cout<<k<<"\n";
	}
	return 0;
}