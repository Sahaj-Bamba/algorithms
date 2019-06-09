#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	ll A[100005];
	ll B[100005];
	ll C[3][3];
	
	cin>>t;
	while(t--){
		r=0;
		cin>>n;
		for (int i = 0; i < 3; ++i)
			{
				for (int j = 0; i < 3; ++j)
				{
					C[i][j]=0;
				}
			}	
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
			cin>>B[i];
		}
		cin>>a>>b;
		a--;
		b--;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; i < 3; ++j)
			{
				for (int k = 0; k < 3; ++k)
				{
					if (A[i]-a+2==i&&B[j]-b+1==j)
					{
						C[i][j]++;
					}
					if (A[i]-a+2==i&&B[j]-1-b==j)
					{
						C[i][j]++;
					}
					if (A[i]-2-a==i&&B[j]+1-b==j)
					{
						C[i][j]++;
					}
					if (A[i]-2-a==i&&B[j]-1-b==j)
					{
						C[i][j]++;
					}
					if (A[i]-a+1==i&&B[j]+2-b==j)
					{
						C[i][j]++;
					}
					if (A[i]-a+1==i&&B[j]-2-b==j)
					{
						C[i][j]++;
					}
					if (A[i]-1-a==i&&B[j]-2-b==j)
					{
						C[i][j]++;
					}
					if (A[i]-1-a==i&&B[j]+2-b==j)
					{
						C[i][j]++;
					}
				}
			}
		}
		r=0;
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (C[i][j]==0)
				{
					r=1;
					break;
				}
			}
		}
		if (r==1)
		{
			cout<<"NO\n";
		}
		else
			cout<<"YES\n";
	}
	return 0;
}