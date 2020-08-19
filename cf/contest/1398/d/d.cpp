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

ll dp[201][201][201];
ll a, b, c;
ll A[201];
ll B[201];
ll C[201];

ll fun(ll i, ll j, ll k)
{

	if ((i > -1 && j > -1 && k > -1))
	{

		if (dp[i][j][k] != -1)
		{
			return dp[i][j][k];
		}
		return dp[i][j][k] = max((i <= -1 || j <= -1) ? 0 : A[i] * B[j] + fun(i - 1, j - 1, k), max((k <= -1 || j <= -1) ? 0 : C[k] * B[j] + fun(i, j - 1, k - 1), (i <= -1 || k <= -1) ? 0 : A[i] * C[k] + fun(i - 1, j, k - 1)));
	}
	return max((i <= -1 || j <= -1) ? 0 : A[i] * B[j] + fun(i - 1, j - 1, k), max((k <= -1 || j <= -1) ? 0 : C[k] * B[j] + fun(i, j - 1, k - 1), (i <= -1 || k <= -1) ? 0 : A[i] * C[k] + fun(i - 1, j, k - 1)));
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
#define mx 1005
#else
#define mx 1000005
#endif
	fastIO
		ll i,
		j, k, f, r, x, y, z;
	ll n, m, p, q, t;
	r = f = 0;
	memset(dp, -1, sizeof(dp));
	cin >>
		a >> b >> c;
	rep(i, 0, a)
	{
		cin >> A[i];
	}
	rep(i, 0, b)
	{
		cin >> B[i];
	}
	rep(i, 0, c)
	{
		cin >> C[i];
	}
	sort(A, A + a);
	sort(B, B + b);
	sort(C, C + c);
	r = 0;

	cout << fun(a - 1, b - 1, c - 1) << "\n";

	return 0;
}