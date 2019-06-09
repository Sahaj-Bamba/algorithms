ll L[mx][mx]; 
ll X[mx];
ll Y[mx];

ll lcs(ll m, ll n ) 
{ 

	ll i,j,k;
	
	for (ll i=0; i<=m; i++) 
	{ 
		for (ll j=0; j<=n; j++) 
		{ 
			if (i == 0 || j == 0) 
				L[i][j] = 0; 
			else if (X[i-1] == Y[j-1]) 
				L[i][j] = L[i-1][j-1] + 1; 
			else
				L[i][j] = max(L[i-1][j], L[i][j-1]); 
		} 
	} 
	
	ll index = L[m][n]; 
	
	return index;
	
	ll lcs[index+1]; 
	lcs[index] = -100; // Set the terminating character 
	
	// Start from the right-most-bottom-most corner and 
	// one by one store characters in lcs[] 
	
	i = m;
	j = n; 
	
	while (i > 0 && j > 0) 
	{ 
			// If current character in X[] and Y are same, then 
			// current character is part of LCS 
		if (X[i-1] == Y[j-1]) 
		{ 
			lcs[index-1] = X[i-1]; // Put current character in result 
			i--; j--; index--;     // reduce values of i, j and index 
		} 
	
			// If not same, then find the larger of two and 
			// go in the direction of larger value 
		else if (L[i-1][j] > L[i][j-1]) 
			i--; 
		else
			j--; 
	
	} 
	
	 // Print the lcs 
	//	cout << "LCS of " << X << " and " << Y << " is " << lcs; 

}
