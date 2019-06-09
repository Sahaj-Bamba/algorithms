#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	char mat[1005][1005]={{0}};
	ll A[1005]={0};
	cin>>a>>b;
	//cout<<a<<b<<"\n";
	for(i=0;i<a;i++){
	        cin>>mat[i];
	}
	ll f;
	for(i=0;i<b;i++){
	    f=0;
	    for(j=0;j<a;j++){
	        if(A[j]==0){
	            //cout<<"Hi";
	            //cout<<(int)mat[j][i];
	            if(mat[j][i]=='1'){
	                //cout<<"hi";
	                f=1;
	                break;
	            }
	        }
	    }
	    if(f==1){
    	    for(j=0;j<a;j++){
    	        //cout<<"hi";
    	        if(A[j]==0){
        	         //cout<<"hi";
        	         //cout<<"hi"<<mat[j][i];
        	         if(mat[j][i]=='0'){
    	                cout<<"hi";
    	                A[j]=1;
    	            }   
    	        }
    	        else{
    	            //cout<<"ji";
    	        }
    	    }
	    }
	}
	
	i=0;
	while(A[i++]!=1){
	}
	for(i=0;i<a;i++){
	    cout<<A[i];
	}
	//cout<<i;
	return 0;
}