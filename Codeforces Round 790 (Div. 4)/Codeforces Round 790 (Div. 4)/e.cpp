
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
	int n, q; cin >> n >> q;
	vector<ll> v(n);
	for (ll& x : v) cin >> x;
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for (int i = 1; i < n; i++)
	{
		v[i] += v[i - 1];
	}
	while (q--)
	{
		ll x; cin >> x;
		auto it = lower_bound(v.begin(), v.end(), x);
		if (it == v.end())
		{
			cout << "-1\n";
		}
		else
		{
			cout << it - v.begin() + 1 << "\n";
		}
	}

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


