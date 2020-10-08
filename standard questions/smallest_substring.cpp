#include <bits/stdc++.h>
#include <string>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n,f;
	char A[4000005];
	
	while(cin>>A){
		int M[27] = {0};
		ll B[26] = {0};
		char C[27] = "";
		char S[27],T[27];
		for (i = 0; A[i] != '\0' ; ++i)
		{
			B[A[i]-'a']++;
		}

		t=i;
		a=b=c=0;
		r=-1;
		
		for (int i = 0; i < 26; ++i)
		{
			if (B[i]==0)
			{
				continue;
			}
			else{
				f=0;
				for (int j = r+1; j < t; ++j)
				{
					if (A[j]=='a'+i)
					{
						f=1;
					    M[a++]=j;
					    break;
					//	S[a++]=A[j]);
					}
				}
				if(f==0)
				for (int j = r-1; j > -1 ; --j)
				{
					if (A[j]=='a'+i)
					{
						f=1;
						M[a++]=j;
						break;
				// 		b=a;
				// 		while(b>0){
				// 		    S[b]=S[b-1];
				// 		    b--;
				// 		}
				// 		strcpy(T,A[j]);
				// 		strcat(T,S);
				// 		strcpy(S,T);
					}
				}
				if (M[a-1]>r)
				{
					r=M[a-1];
				}
			}
		}
		for(i=0;i<a;i++){
		    cout<<A[M[i]];
		}
		cout<<"\n";
	}
	return 0;
}
