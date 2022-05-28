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
	ll l, r, m; cin >> l >> r >> m;
	ll lower = m - (r - l);
	ll upper = m + (r - l);

	if (l == r)
	{
		cout << l << " " << l << " " << l << "\n";
		return;
	}
	for (ll i = l; i <= r; i++)
	{
		ll a = (lower + i -1) / i;

		ll b = upper / i;
		if ((a <= b && b > 0))
		{
			ll diff = m - b * i;
			if (diff < 0)
			{
				cout << i << " " << r + diff << " " << r << "\n";
				return;
			}
			else
			{
				cout << i << " " << l + diff << " " << l << "\n";
				return;
			}
		}
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}