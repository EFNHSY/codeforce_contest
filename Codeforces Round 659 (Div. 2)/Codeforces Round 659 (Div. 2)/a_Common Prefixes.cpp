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
	string ans(50,'a');
	cout << ans << "\n";
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		if (ans[x] == 'a')
		{
			ans[x] = 'b';
		}
		else
		{
			ans[x] = 'a';
		}
		cout << ans << "\n";
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
