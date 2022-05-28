
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
	int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
	if (r1 < l2 || r2 < l1)
	{
		cout << l1 + l2 << "\n";
		return;
	}

	if (l1 <= l2 && l2 <= r1 && r1 <= r2 || l2<=l1&&l1<=r2&&r2<=r1)
	{
		cout << max(l1, l2) << "\n";
		return;
	}

	if (l1 <= l2 && r2 <= r1)
	{
		cout << l2 << "\n";
		return;
	}
	if (l2 <= l1 && r1 <= r2)
	{
		cout << l1 << "\n";
		return;
	}

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


