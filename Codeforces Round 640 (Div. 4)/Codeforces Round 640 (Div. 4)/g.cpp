#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
void solve()
{
	int n; cin >> n;
	if (n < 4)
	{
		cout << "-1\n";
		return;
	}

	if (n & 1)
	{
		for (int i = n; i >= 1; i-=2)
		{
			cout << i << " ";
		}
		cout << 4 << " " << 2 << " ";
		for (int i = 6; i <= n; i += 2)
		{
			cout << i << " ";
		}cout << "\n";
	}
	else
	{
		for (int i = n - 1; i >= 1; i -= 2)
		{
			cout << i << " ";
		}
		cout << 4 << " " << 2 << " ";
		for (int i = 6; i <= n; i += 2)
		{
			cout << i << " ";
		}cout << "\n";
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
