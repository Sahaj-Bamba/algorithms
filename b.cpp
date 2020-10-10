#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long k,sum=0;
        int d0,d1;
        cin>>k>>d0>>d1;
        sum=d0+d1;
        if(k>2)
        {
            int d2=(d0+d1)%10;
            sum+=d2;
            int d3=(2*d2)%10;
            int d4=(2*d3)%10;
            int d5=(2*d4)%10;
            int d6=(2*d5)%10;
            sum+=((k-3)/4)*(d3+d4+d5+d6);
            if((k-3)%4==1)
                sum+=d3;
            else if((k-3)%4==2)
                sum+=d3+d4;
            else if((k-3)%4==3)
                sum+=d3+d4+d5;
        }
        if(sum%3==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
    }
}
