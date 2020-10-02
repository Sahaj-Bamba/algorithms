#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	ll a,b,c,y,i,j,k,x,r,t,n,f=0;
	int A[201]={0};
	int B[201]={0};
	int C[201]={0};
	
	for (int i = 2; i < 201; ++i)
	{
		if (A[i]==0){
			for (int j = 2; i*j < 201; ++j)
			{
				A[i*j]++;
			}
		}
	}

	for (int i = 2; i < 201; ++i)
	{
		if (A[i]==0)
		{
			for (int j = i+1; j*i < 201; ++j)
			{
				if (A[j]==0)
				{
					B[i*j]=1;
				}
			}
		}
	}

	for (int i = 6; i < 201; ++i)
	{
		if (B[i] == 1)
		{
			for (int j = 6; j+i < 201 ; ++j)
			{
				if (B[j] == 1)
				{
					C[i+j] = 1;
				}
			}
		}
	}

	cin>>t;
	while(t--){
		cin>>n;
		if (C[n] == 1)
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}