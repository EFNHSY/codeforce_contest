#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }

ll bit[200001][31];

void solve()
{
	memset(bit, 0, sizeof(bit));
	ll n, k; cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		ll x; cin >> x;
		int idx = 0;
		while (x)
		{
			ll temp = x & 1;
			bit[i][idx] = temp;
			x >>= 1;
			idx++;
		}
	}
	ll ans = 0;
	for (ll j = 30; j >= 0; j--)
	{
		int open = 0;
		for (ll i = 0; i < n; i++)
		{
			open += bit[i][j];
		}
		if (k >= (n - open))
		{
			ans += (1ll << j);
			k -= (n - open);
		}
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}