#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<=n-k;i++ )
        {
            int max=a[i];
            for(int j=i;j<i+k;j++)
            {
                if(a[j]>max)
                    max=a[j];
            }
            b[i]=max;
        }
        sort(b,b+n-k+1);
        cout<<b[0]<<endl;
    }
	// your code goes here
	return 0;
}

