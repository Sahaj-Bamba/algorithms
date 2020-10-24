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

        int left =1;
        int right = n;
        while (left<right)
        {
           int m = left + (right - left)/2;
        //    if(m*m==n)
        //    {cout<<m<<endl;
        //    break;}
        //    else 
        cout<<m<<"\n";
        if(m*m>n){right=m;}else{left=m+1;}
        }
        cout<<left-1<<endl;
    }
}