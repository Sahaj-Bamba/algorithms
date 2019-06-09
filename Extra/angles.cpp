#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll a,b,c,i,j,k,r,t,n;
int dp[361]={0};
ll A[100];
ll B[100];

int fun(int p){
	p%=360;
	if(p<0)
		return 0;
	else if (dp[p]==1)
	{
		return 0;
	}
	else{
		dp[p]=1;
		for (int i = 0; i < n; ++i)
		{
			fun(A[i]+p);
			fun(p-A[i]);
		}
	}
}
	
int main(int argc, char const *argv[])
{
	fastIO
		r=0;
		cin>>n>>k;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		for (int i = 0; i < k; ++i)
		{
			cin>>B[i];
		}
		fun(0);
		for (int i = 0; i < k; ++i)
		{
			if (dp[B[i]]==1)
			{
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		}

	return 0;
}