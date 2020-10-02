#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	ll a,b,c,y,i,j,k,x,r,t,n,f=0;
	ll A[100005];
	cin>>t;
	while(t--){

		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>B[i];
		}

		f=0;

		for (int i = 0; i < n-2; ++i)
		{
			if (A[i]<=B[i])
			{
				x=B[i]-A[i];
				A[i+1]+=x*2;
				A[i+2]+=x*3;
			}
			else{
				f=1;
				break;
			}
		}
		if (A[i]!=B[i] && A[i+1]!=B[i+1])
		{
			f=1;
			break;
		}

		if (f==1)
		{
			cout<<"NIE\n";
		}
		else
			cout<<"TAK\n";
	}
	return 0;
}