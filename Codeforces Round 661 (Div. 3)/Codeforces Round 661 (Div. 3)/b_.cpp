#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
void solve()
{
	int n; cin >> n;
	vector<ll> a(n);
	vector<ll> b(n);
	for (ll& x : a) cin >> x;
	for (ll& x : b) cin >> x;

	ll a_min = *min_element(a.begin(), a.end());
	ll b_min = *min_element(b.begin(), b.end());

	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans += max(a[i] - a_min, b[i] - b_min);
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}