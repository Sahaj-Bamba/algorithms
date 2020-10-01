#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll A[3][3];
ll B[3][3];
ll C[3][3];
ll a,b,c,i,j,k,r,t,n,x,y,z;

int main(int argc, char const *argv[])
{
	fastIO

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin>>A[i][j];
			if (A[i][j]==0)
			{
				a=i;
				b=j;
			}
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			B[i][j]=A[i][j];
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin>>C[i][j];
			if (C[i][j]==0)
			{
				t=i*3+j;	
			}
		}
	}

	
	queue<ll> Q;
	Q.push(a*3+b);

	while(Q.size()!=0){
		x=Q.front();
		y=x/3;
		z=x%3;
		
		if (x==t)
		{
			if (mat_cmp(A,C))
			{
				//done

				break;
			}
		}

		a=y+1;
		b=z;
		if (a>2 || a<0 || b>2 || b<0)
		{
			continue;
		}else{
			Q.push(a*3+b);
		}
		a=y-1;
		b=z;
		if (a>2 || a<0 || b>2 || b<0)
		{
			continue;
		}else{
			Q.push(a*3+b);
		}
		a=y;
		b=z+1;
		if (a>2 || a<0 || b>2 || b<0)
		{
			continue;
		}else{
			Q.push(a*3+b);
		}
		a=y;
		b=z-1;
		if (a>2 || a<0 || b>2 || b<0)
		{
			continue;
		}else{
			Q.push(a*3+b);
		}

		
	}
	return 0;
}