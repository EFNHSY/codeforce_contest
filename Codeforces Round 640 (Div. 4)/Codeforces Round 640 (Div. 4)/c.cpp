#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
void solve()
{
	ll n, k; cin >> n >> k;
	ll d = k / (n - 1);
	ll q;
	if (k % (n - 1) == 0)
	{
		q = -1;
	}
	else
	{
		q = k % (n - 1);
	}
	cout << d * n + q << "\n";
	
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
