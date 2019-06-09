#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	ll A[1000005];
	ll B[1000005];
	ll C[1000005];
	cin>>t;
	while(t--){
		r=0;
		cin>>n>>k;
		cin>>A[0];
		B[0] = A[0];
		j=1;
		for (int i = 1; i < n; ++i)
		{
			cin>>A[i];
			if (A[i]>k)
			{
				B[j++]=i;
			}
		}
		b=j;
		mx=0;
		for (int i = 0; i < j-1; ++i)
		{
			C[i]=B[i+1]-B[i];
		}
		a=i;
		for (int i = 0; i < a; ++i)
		{
			j=B[i]-1;
			while(1){
				if (j<0)
				{
					break;
				}
				if (A[j]!=A[j+1])
				{
					break;
				}
				C[i]++;
			}
			j=B[i+1]+1;
			while(1){
				if (j>n)
				{
					break;
				}
				if (A[j]!=A[j-1])
				{
					break;
				}
				C[i]++;
			}
		}
		mx=0;
		for (int i = 0; i < a; ++i)
		{
			mx=(max(C[i],mx));
		}
		

		cout<<mx+1<<"\n";
	}
	return 0;
}