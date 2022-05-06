
#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }


void solve()
{
	ll n; cin >> n;
	cout << n / 2 + 1 << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}