#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n,q,end,start=0,mx=0,pos,st,en;
	ll A[100005];
	ll B[300005]={0};
	char Q[300005];
		
		r=0;
		b=100005;
		cin>>n>>q>>k;
		cin>>A[0];
		if (A[0]==1)
		{
			B[b]++;
		}
		for (int i = 1; i < n; ++i)
		{
			cin>>A[i];
			//cout<<"die";
			if (A[i]==1)
			{
				B[b]++;
			}
			else if (A[i]==0&&A[i-1]==1)
			{
				b++;
			}
			else{
				continue;
			}
		}

		end=n-1;
		start=0;
		st=100005;
		en=b;
		if (B[b]==0)
		{
			en--;
		}
		//cout<<st<<" "<<en<<"\n ";
		// for(i=st;i<=en;i++){
		// 	cout<<B[i]<<" ";
		// }
		// cout<<"\n";
		mx=B[st];
		pos=100005;
		
		for (int i = 100006; i <= b; ++i)
		{
			if (B[pos]<B[i])
			{
				pos=i;
			}
		}

		mx=B[pos];

		cin>>Q;
		for (int i = 0; i < q; ++i)
		{
			if (Q[i]=='!')
			{
				if (A[end]==0)
				{
					;
				}
				else{
					if (A[start]==0)
					{
						B[en]--;
						st--;
						B[st]++;
					}
					else{
						B[en]--;
						B[st]++;
					}

						if (pos==st&&pos!=en)
						{
							mx++;
						}
						else if (pos==en)
						{
							
							mx=B[st];
							pos=st;
							
							for (int i = st+1; i <= en; ++i)
							{
								if (B[pos]<B[i])
								{
									pos=i;
								}
							}

							mx=B[pos];
							
						}

						if (B[st]>B[pos])
						{
							pos=st;
							mx=B[pos];
						}

					if (B[en]<=0)
					{
						en--;
					}
				}
				start--;
				end--;
				if (start==-1)
				{
					start=n-1;
				}
				if (end==-1)
				{
					end=n-1;
				}
			}
			else{
						//	improve


					if (mx>k)
					{
						cout<<k<<"\n";
					}
					else{
						cout<<mx<<"\n";
					}
			}
		}
		
		

		//cout<<r<<"\n";
	
	return 0;
}