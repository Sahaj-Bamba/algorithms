	//	Time	O(log(n))
	//	Space	O(log(n)) 

ll modularExponentiation(ll x,ll n,ll M=mod)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}

	//	Time	O(log(p))
	//	Space	O(1) 
	
	//	#define mod 1000000007
ll exp_mul(ll b,ll p){
    ll ans = 1;
    while(p>0){
        if(p%2!=0){
            ans*=b;
            ans%=mod;
        }
        b*=b;
        b%=mod;
        p/=2;
    }
    return ans;
}