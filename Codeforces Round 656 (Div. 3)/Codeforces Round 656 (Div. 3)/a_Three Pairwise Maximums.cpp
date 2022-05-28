
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
	ll x, y, z; cin >> x >> y >> z;

	if (x == y && y >= z)
	{
		cout << "YES\n";
		cout << x << " " << z << " " << z << "\n";
	}
	else if (x == z && y <= z)
	{
		// bac bca
		cout << "YES\n";
		cout << y << " " << x << " " << y << "\n";
	}
	else if (y == z && x <= y)
	{
		cout << "YES\n";
		cout << x << " " << x << " " << y << "\n";
	}
	else
	{
		cout << "NO\n";
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


