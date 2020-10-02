#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	ll a,b,c,i,j,k,r,t,n,m,x,y,z;
	int X[90005];
	int Y[90005];
	int Z[605]={0};
	char B[305][305];
	cin>>t;
	while(t--){
		cin>>n>>m;
		for (int i = 0; i < n; ++i)
		{
			cin>>B[i];
		}
		for (int i = 0; i < 605; ++i)
		{
			Z[i] = 0;
		}
		z=0;
		for (int i = 0; i <n ; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (B[i][j] == 1)
					{
						X[z] = i;
						Y[z++] = j; 
					}	
			}
		}

		for (int i = 0; i < z; ++i)
		{
			for (int j = i+1; j < z; ++i)
			{
				Z[abs(X[i]-X[j])+abs(Y[i]-Y[j])]++;
			}
		}

		for (int i = 1; i <= n+m-2; ++i)
		{
			cout<<Z[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}