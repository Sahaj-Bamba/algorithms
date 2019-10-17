#include<bits/stdc++.h>
#include<math.h>
#define rep(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define MOD 1000000007
#define INF 0x3f3f3f3f3f3f3f3f
#define MIN(a,b) (a>b?b:a)
using namespace std;
void init();
void adder(ll,ll);
ll t,n,k,ar[100005],str[105],pos,max_;
char ans[100005];
int main()
{
	cin>>t;
	while(t--)
	{
		pos=0;
		max_=-1;
		cin>>n>>k;	
		rep(i,0,n)
		{
			cin>>ar[i];
			if(ar[i]>max_)
			{
				pos=i;
				max_=ar[i];
			}
			ans[i]='C';
		}
		rep(i,0,k)
		cin>>str[i];
		sort(str,str+k);			
		
		rep(i,0,k)
		if(pos-str[i]+1>=0)
		ans[pos-str[i]+1]='W';

		// rep(i,0,n)
		// cout<<ans[i]<<" ";
		// cout<<"\n";

		for(int i=pos-1;i>=0;i--)
		{
			if(ans[i]=='W')
				continue;
			ll flag=0;
			rep(j,0,k)
			{
				if(i+str[j]-1>=n)
					break;
				if(i+str[j]-1>=pos)
					flag=1;
				if(ans[i+str[j]]=='L')
				{
					//cout<<j<<" "<<str[j]<<"X\n";
					flag=1;
				}	
			}
			if(flag==1)
				ans[i]='W';
			else
				ans[i]='L';
		}	
		// rep(i,0,n)
		// cout<<ans[i]<<" ";
		// cout<<"\n";
		if(ans[0]=='W')
			cout<<"Chef";
		else
			cout<<"Garry";
		cout<<"\n";
	}
}

