#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
using namespace std;
typedef long long int ll;

vector<int> A[2005];
int mxY=0;		
int minY=2000000;
int B[2005]={0};
int fun(int time,int y){

	int a;

	if(time<=0){
		return 0;
	}
	if (y>mxY)
	{
		return 0;
	}
	a=fun(time-1,y+1);
	for (int i = 0; i < A[y].size(); ++i)
	{
		if(time>A[y][i]*2){
			a = max(fun(time-(A[y][i]*2+1),y+1)+i+1,a);
		}else if(time>=A[y][i]){
			a = max(i+1,a);
		}
		else{
			return a;
		}
	}
	return a;
}

int main(int argc, char const *argv[])
{
	fastIO
	ll b,c,f,i,j,k,r,t,n,x,y,z;
	int a;
	//ll A[mx];
	cin>>t;
	while(t--){
		
		for (int i = 0; i < 2005; ++i)
		{
			B[i]=0;
		}

		for (int i = 0; i < 2001; ++i)
		{
			A[i].clear();
		}
		r=0;
		cin>>n>>k;
		for (int i = 0; i < n; ++i)
		{
			cin>>a>>b>>c;
			A[a].push_back(max(b,c));
			mxY = max(mxY,a);
			minY = min(minY,a);
		}
		for (int i = 0; i < 2001; ++i)
		{
			if (A[i].empty())
			{
				continue;
			}
			sort(A[i].begin(),A[i].end());
		}
		

		cout<<fun(k-minY,minY)<<"\n";
	}
	return 0;
}