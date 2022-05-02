#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<ll> v(n + 1);
	for (int i = 1; i <= n; i++)
	{
		char c; cin >> c;
		v[i] = c - '0';
	}
	vector<ll > psum(n + 1, 0);
	for (int i = 1; i <= n; i++)
	{
		psum[i] = psum[i - 1] + v[i];
	}

	map<ll, ll> m;
	for (int i = 0; i <= n; i++)
	{
		m[psum[i] - i]++;
	}
	ll ans = 0;
	for (auto u : m)
	{
		ll x = u.second;
		ans += x * (x - 1) / 2;
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}