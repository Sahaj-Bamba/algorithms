#include<bits/stdc++.h>
using namespace std;
//long long mod=2e61-1,value=1;
long long mod=(1LL<<61)-1,value=1;

long long multiply(long long a,long long b)
{

    if(b==0)
        return 0;
    long long ans;
    if(b==1)
        return a;

    ans=multiply(a,b/2);
    ans=ans%mod;
    ans*=2;
    ans=ans%mod;
    if(b%2==1)
        ans=ans+a;
    ans=ans%mod;
    return ans;
}

int main()
{
    long long n,k;
    scanf("%lld%lld",&n,&k);
    for(long long int i=1; i<=k; i++)
    {
        value=multiply(value%mod,(n-i+1)%mod);
        value=value%mod;
    }
    printf("%lld\n",value);
    return 0;
}
