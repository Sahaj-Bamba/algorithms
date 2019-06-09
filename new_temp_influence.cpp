#pragma GCC optimize ("Ofast")
#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
using namespace __gnu_pbds;
using namespace std;
typedef long long int ll;
#define int long long 
#define pb push_back
#define fi first
#define se second
#define deb cerr << "Line no." << __LINE__
#define fr(i, a, b) for(int i = a; i <= b; i++)
#define all(x) x.begin(), x.end()
#define IO ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define pii pair<ll,int>
#define sz(x) (int)x.size()
const int mod = 1e9 + 7;
const int mod1 = 998244353;
typedef long double f80;
#ifndef LOCAL
#define endl '\n'
#endif
 
template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rand(int l, int r){
   uniform_int_distribution<int> uid(l, r);
   return uid(rng);
}
ll pwr(ll a,ll b){
	int ans = 1;
	while(b){
	  if(b & 1) ans = (ans * a) % mod;
	  a = (a * a) % mod;
	  b >>= 1;
	}
	return ans;
}
void solve(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		string s;
		cin >> n >> s;
		k = sz(s);
		if(n <= k){
			cout << 0 << endl;
			continue;
		}
		int val = pwr(26, n - k - 1);
		int ans = (k * 25 * val) % mod;
		ans = (ans + val * 26) % mod;
		cout << ans << endl;
	}
}
signed main(){
	IO;
	#ifdef LOCAL
	    freopen("inp.txt","r", stdin);
	    // freopen("out.txt", "w", stdout);
	#endif
	clock_t clk = clock();
	int t = 1;
	// cin >> t;
	fr(tt, 1, t){
	    solve();
	}
	cerr << endl << setprecision(10) << fixed << (double)(clock() - clk) / CLOCKS_PER_SEC;
	return 0;
}