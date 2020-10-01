#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	ll A[105]={0};
	
		r=0;
		cin>>n>>k;
		for (int i = 0; i < n; ++i)
		{
			cin>>a;
			A[a]++;
		}
	
	a=0;
	b=0;	
		for (int i = 0; i < 102; ++i)
		{
			if (A[i]!=0)
			{
				b++;
			}
			if(A[i]>a){
				a=A[i];
			}
		}

	c=0;

		for (int i = 0; i < 102; ++i)
		{
			if (A[i]!=0)
			{
				c+=a-A[i];
			}
		}


	r=a%k;
	if (r!=0)
	{
		t=k-r;
	}
	t*=b;

	c+=t;
		cout<<c;
	return 0;
}