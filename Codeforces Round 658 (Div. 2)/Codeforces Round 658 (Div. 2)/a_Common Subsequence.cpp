
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
	vector<int> a(1001, 0);
	vector<int> b(1001, 0);
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		a[x]++;
	}
	for (int i = 0; i < m; i++)
	{
		int x; cin >> x;
		b[x]++;
	}
	for (int i = 1; i <= 1000; i++)
	{
		if (a[i] && b[i])
		{
			cout << "YES\n";
			cout << "1 " << i << "\n";
			return;
		}
	}
	cout << "NO\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


