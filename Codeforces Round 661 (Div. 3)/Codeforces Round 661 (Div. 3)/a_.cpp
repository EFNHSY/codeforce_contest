#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }


void solve()
{
	int n; cin >> n;
	vector<int> v(n);
	for (int& x : v) cin >> x;
	if (n == 1) {
		cout << "YES\n";
		return;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n-1; i++)
	{
		if (v[i + 1] - v[i] >= 2)
		{
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}