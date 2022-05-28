
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
	int n; cin >> n;
	vector<ll> v(n);

	ll ans = 0;
	for (ll& x : v) cin >> x;

	ll min_ = *min_element(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		ans += (v[i] - min_);
	}
	cout << ans << "\n";


}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


