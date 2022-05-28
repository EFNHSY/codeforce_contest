
/*
*   Time :
*   Subject :
*
*   Coded by soonyubing
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
void solve()
{
	ll n, k; cin >> n >> k;
	vector<ll> v(n);
	vector<pair<ll, ll>> jump;
	for (ll& x : v) cin >> x;
	for (int i = 0; i < n; i++)
	{
		jump.push_back({ v[i] - (n -(i+1)),i });
	}
	sort(jump.begin(), jump.end());
	reverse(jump.begin(), jump.end());
	vector<bool> check(n);
	for (int i = 0; i < k; i++)
	{
		check[jump[i].second] = true;
	}
	ll m = 0;
	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (!check[i])
		{
			ans += m + v[i];
		}
		if (check[i]) m++;
	}
	cout << ans << "\n";
}
int main()
{
	ll t; cin >> t;
	while (t--) solve();
	return 0;
}


