ll X[mx];
ll Y[mx];
ll LCSuff[mx][mx]; 
ll LCSubStr(ll n,ll m) 
{  
	ll result = 0;
	ll i,j;

	for (i=0; i<=n; i++) 
	{ 
		for (j=0; j<=n; j++) 
		{ 
			if (i == 0 || j == 0) 
				LCSuff[i][j] = 0; 

			else if (X[i-1] == Y[j-1]) 
			{ 
				LCSuff[i][j] = LCSuff[i-1][j-1] + 1; 
				result = max(result, LCSuff[i][j]); 
			} 
			else LCSuff[i][j] = 0; 
		} 
	}
	return result; 
} 


				//		Complexity  O(n*m)