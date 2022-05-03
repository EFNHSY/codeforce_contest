#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
void solve()
{
	int n; cin >> n;
	int k = n;
	vector<int> ans(n + 1);
	for (int i = 1; i <= n; i += 2)
	{
		ans[i] = k--;
	}
	for (int i = 2; i <= n; i += 2)
	{
		ans[i] = k--;
	}
	for (int i = 1; i <= n; i++)
	{
		cout << ans[i] << " ";
	}cout << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}