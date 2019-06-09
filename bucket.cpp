#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1005;
using namespace std;
typedef long long int ll;


float fun(int color,int bucket){
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			B[i][j]*
		}
	}

}


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,f,i,j,k,r,t,n,x,y,z;
	ll A[mx][mx];
	/*
	float B[mx][mx];
	float C[mx][mx];
	float D[mx][mx];
	*/
	double P,O,I,U,Y,T;
	
	ll sum[mx];
	cin>>n>>k;
	for (int i = 0; i < n; ++i)
	{
		a=0;
		for (int j = 0; j < k; ++j)
		{
			cin>>A[i][j];
			a+=A[i][j];
		}
		sum[i]=a;
	}
	
	/*
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			B[i][j]=A[i][j]/(sum[i]+1);
			D[i][j]=(A[i][j]+1)/(sum[i]+1);
			if(A[i][j]>=1){
				C[i][j]=(A[i][j]-1)/(sum[i]+1);
			}
		}
	}
	*/

	for (i = 0; i < k; ++i)
	{
		P=((double)A[0][i])/sum[0];
		for (j = 1; j < n; ++j)
		{
			P=P*((double)A[j][i]+1)/(sum[j]+1) + ((double)1-P)*((double)A[j][i])/(sum[j]+1);
		}
		cout<<P<<" ";
	}


	return 0;
}