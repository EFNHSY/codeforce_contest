#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
void solve()
{
	ll n, k; cin >> n >> k;
	if (n % 2 == 1)
	{
		if (k % 2 == 0) {
			cout << "NO\n";
			return;
		}
		else if (k > n)
		{
			cout << "NO\n";
			return;
		}
	}

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
