#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
void solve()
{
	int n; cin >> n;
	map<int, int> m;
	
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		m[x]++;
	}
	int mx = 0;
	for (auto u : m)
	{
		mx = max(mx, u.second);
	}
	int mx_cnt = 0;
	for (auto u : m)
	{
		if (mx == u.second) mx_cnt++;
	}
	cout << (n - mx_cnt) / (mx - 1 ) -1<< "\n";

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}