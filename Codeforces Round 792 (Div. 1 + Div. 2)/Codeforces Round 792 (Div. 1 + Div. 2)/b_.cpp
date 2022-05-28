
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
	ll a, b, c; cin >> a >> b >> c;
	ll z = c,x,y;
	y = z + b;
	x = y + a;
	cout << x << " " << y << " " << z << "\n";
	//cout << x % y << " " << y % z << " " << z % x << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


