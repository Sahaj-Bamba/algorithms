#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,f,i,j,k,r,t,n;
	char A[1005];
	cin>>t;
	while(t--){
		r=0;
		cin>>A>>k;
		n=strlen(A);
		for(i=0;i<n-k;i++){
		    if(A[i]=='0'){
		        r++;
		        for(j=0;j<k;j++){
		            if(A[i+j]=='0'){
		                A[i+j]='1';
		            }
		            else{
		                A[i+j]='0';
		            }
		        }
		    }
		}
        f=0;
        for(;i<n;i++){
            if(A[i]=='0'){
                f=1;
                break;
            }
        }
        if(f==1){
            r=-1;
        }
		cout<<r<<"\n";
	}
	return 0;
}