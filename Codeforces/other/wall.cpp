#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 2000005
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,f,i,j,k,r,t,n,x,y,z;
	ll A[mx];
	r=0;
	cin>>n;
	a=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>A[i];
		a=max(a,A[i]);
	}
	r=0;
	for (int i = 0; i < n; i++)
	{
		if (A[i]%2==a%2)
		{
			continue;
		}
		else {
			if(i<n-1&&A[i]%2==A[i+1]%2){
				i++;
				continue;
			}else{
				if (i%2==0)
				{
					a++;
					continue;
				}else if (i<n-3&&A[i]%2==A[i+3]%2&&A[i+1]%2==A[i+2]%2)
				{
					i+=3;
					continue;
				}
			}
		}
		r++;
		break;
	}
	if (r==1)
	{
		for (int i = 0; i <= n/2; ++i)
		{
			b=A[i];
			A[i]=A[n-i-1];
			A[n-i-1]=b;
		}
		r=0;
		for (int i = 0; i < n; i++)
		{
			if (A[i]%2==a%2)
			{
				continue;
			}
			else {
				if(i<n-1&&A[i]%2==A[i+1]%2){
					i++;
					continue;
				}else{
					if (i%2==0)
					{
						a++;
						continue;
					}else if (i<n-3&&A[i]%2==A[i+3]%2&&A[i+1]%2==A[i+2]%2)
					{
						i+=3;
						continue;
					}
				}
			}
			r++;
			break;
		}
		if (r==1)
		{
			cout<<"NO";
		}
		else{
			cout<<"YES";
		}
	}
	else{
		cout<<"YES";
	}
		
	return 0;
}