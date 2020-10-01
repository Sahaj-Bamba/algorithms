#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int flag=0;
        for(int i=n-11;i>=0;i--)
        if(str[i]=='8')
        flag=1;

        if(flag==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}
