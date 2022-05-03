#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }

void solve()
{
	int x, y; cin >> x >> y;
	if (y % x != 0||x>y)
	{
		cout << "0 0\n";
		return;
	}
	cout << 1 << " " << y/x << "\n";
}

int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}