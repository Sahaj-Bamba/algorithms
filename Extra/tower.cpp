#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	ll A[100005];
	ll L[100005];
	ll R[100005];
	cin>>t;
	while(t--){
		r=0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
			L[i]=0;
			R[i]=0;
		}
		if (A[i]>0)
		{
			L[i]=1;
		}
		for (int i = 1; i < n; ++i)
		{
			if (A[i]<0)
			{
				L[i]=L[i-1];
			}
			else{
				L[i]=L[i-1]+1;
			}
		}
		if (A[n-1]<0)
		{
			R[n-1]=1;
		}
		for (i = n-2; i > -1; --i)
		{
			if (A[i] < 0)
			{
				R[i] = R[i+1]+1;
			}
			else{
				R[i] = R[i+1];
			}
		}
		r=99999;
		for (int i = 0; i < n; ++i)
		{
			r=min(r,L[i]+R[i]-1);
		}

		cout<<r<<"\n";
	}
	return 0;
}