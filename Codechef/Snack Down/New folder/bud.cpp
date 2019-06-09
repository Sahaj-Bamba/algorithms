#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n,m,x,y,f;
	ll A[100005];
	ll B[100005];
	cin>>t;
	while(t--){
		//r=0;
		cin>>n>>m;
		a=0;
		b=0;
		x=0;
		y=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
			a+=A[i];
			if (A[i]==1)
			{
				x++;
			}
		}
		for (int i = 0; i < m; ++i)
		{
			cin>>B[i];
			b+=B[i];
			if (B[i]==1)
			{
				y++;
			}
		}
		sort(A,A+n);
		sort(B,B+m);
		i=0;
		j=0;
		while(A[i]==0){
			i++;
		}
		while(B[j]==0){
			j++;
		}
		f=0;
		for (; i < n; ++i,++j)
		{
			if (A[i]!=B[j])
			{
				f=1;
				break;
			}
		}

		
		if (f==0)
		{
			cout<<"Bob";
		}
		else{
			cout<<"Alice";
		}
		
		cout<<"\n";
	}
	return 0;
}