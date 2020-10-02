#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t-- > 0) {
		long long int n,sum=0,i=0;
		cin >> n;
		long long int* a = new long long int[n];
		for (long long int i = 0;i < n;i++) {
			cin >> a[i];
		}
		priority_queue<long long int>s;
		i = 0;
		for (i = 0;i < n;) {
			if (a[i] < 0) {
				while (a[i] < 0 && i < n) {
					s.push(a[i]);
					i++;
				}
			}
			else {
				while (a[i] > 0 && i < n) {
					s.push(a[i]);
					i++;
				}
			}
			
			sum += s.top();
			s=priority_queue<long long int>();
		}
		
		cout << sum << endl;
	}
	return 0;
}
