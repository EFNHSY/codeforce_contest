
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
	vector<int> v(2 * n);
	for (int& x : v) cin >> x;
	vector<int> check(n + 1, false);
	vector<int> ans;
	for (int i = 0; i < 2 * n; i++)
	{
		if (!check[v[i]])
		{
			check[v[i]] = true;
			ans.push_back(v[i]);
		}
	}
	for (auto u : ans)
	{
		cout << u << " ";
	}cout << "\n";
}

int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


