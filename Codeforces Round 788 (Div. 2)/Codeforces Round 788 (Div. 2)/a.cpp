#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }


void solve()
{
	int n; cin >> n;
	vector<ll> v(n);
	int neg = 0;
	int pos = 0;
	for (int i = 0; i < n; i++)
	{
		ll x; cin >> x;
		v[i] = abs(x);
		if (x < 0) neg++;
		else pos++;
		
	}
	
	for (int i = 0; i < neg; i++)
	{
		v[i] = -v[i];
	}
	
	for (int i = 0; i < n - 1; i++)
	{
		if (v[i] > v[i + 1])
		{
			cout << "NO\n";
			return;
		}
	}
	
	cout << "YES\n";

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}