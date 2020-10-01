#include <bits/stdc++.h>
#define fastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(0);                       \
	cout.tie(0);
#define mod 1000000007
// #define mx 1000005
#define INF LLONG_MAX

#define debug(a) cout << "\n----------------------" << a << "-------------------------"

#define mem(a, val) memset(a, val, sizeof(a))
#define rep(i, j, n) for (i = j; i < n; i++)
#define invrep(i, j, n) for (i = j - 1; i >= n; --i)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed << setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define bin_long stoi(to_string(x), nullptr, 2);

using namespace std;
typedef long double ld;
ld pi = 2.0 * acos(0.0);

typedef long long int ll;
typedef pair<ll, ll> pl;

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
#define mx 1005
#else
#define mx 1000005
#endif
	fastIO
		ll a,
		b, c, i, j, k, f, r, x, y, z;
	ll n, m, p, q, t;
	string A;
	// memset(A,-1,sizeof(A));
	cin >> t;
	while (t--)
	{
		r = f = 0;
		// cin >> n;
		// rep(i, 0, n)

		cin >> A;
		n = A.size();
		vector<pl> V;
		a = 1;
		if (A[0] == '1')
		{
			j = 1;
		}
		else
		{
			j = 0;
		}
		rep(i, 1, n)
		{
			if (A[i] == A[i - 1])
			{
				a++;
			}
			else
			{
				V.pb(mp(j, a));
				a = 1;
				j = (j + 1) % 2;
			}
		}
		V.pb(mp(j, a));
		n = V.size();
		sort(V.begin(), V.end());
		r = 0;
		for (i = n - 1; i >= 0; i -= 2)
		{
			if (V[i].f != 1)
			{
				break;
			}
			r += V[i].s;
		}
		cout << r << "\n";
	}

	return 0;
}