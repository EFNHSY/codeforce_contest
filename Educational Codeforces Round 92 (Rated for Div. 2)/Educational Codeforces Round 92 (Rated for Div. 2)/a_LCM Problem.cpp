
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
	int l, r; cin >> l >> r;
	if (l * 2 > r)
	{
		cout << "-1 -1\n";
	}
	else cout << l << " " << l * 2 << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


