
#define prime_max 1000006
ll Prime[prime_max]={0};
std::vector<ll> primes;
void prime_seive(int n=prime_max){
	Prime[0]=Prime[1]=1;
	for (int i = 2; i < n; ++i)
	{
		if (Prime[i]==0)
		{
			for (int j = i; j < n; j+=i)
			{
			    if(Prime[j]==0){
				    Prime[j]=i;

                }
			}
		}
	}
    rep(i,2,n){
        if (Prime[i]==i)
        {
            primes.pb(i);
        }
    }
}



//	uses of seive

bool check_prime(int n){
	if (Prime[n]==n)
	{
		return true;
	}
	else{
		return false;
	}
}

ll nums[prime_max] ={0};
int num_fac(int a){
    if(nums[a]!=0){
        return nums[a];
    }
    ll an = a;
    if(a==1){
    	nums[1]=1;
        return 1;
    }
 
    int ans = 1;
    int power = 0;
    int base=0;
 
    if(check_prime(a)){
        ans=2;
        nums[an]=ans;
        return ans;
    }   
    
    while(a!=1&&!(check_prime(a))){
        base=Prime[a];
        power=1;
        while(Prime[a]==base){
            power++;
            a/=base;
        }
        ans*=power;
    }
    if(a!=1){
        ans*=2;
    }
    nums[an]=ans;
    return ans;
}
