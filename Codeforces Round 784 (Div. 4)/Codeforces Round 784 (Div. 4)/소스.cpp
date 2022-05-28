#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
vector<int> v;
int n;
bool check(int mid)
{
	int alice = 0, bob = 0;
	for (int i = 1; i <= mid; i++)
	{
		alice += v[i];
		bob += v[n + 1 - i];
	}

	return alice == bob;
}
void solve()
{
	cin >> n;
	v = vector<int>(n);
	for (int& x : v) cin >> x;

	int alice = v[0], bob = v[n - 1];
	int l = 0, r = n - 1;
	int ans = 0;
	while (l < r)
	{
		if (alice == bob)
		{
			ans = max(ans, l + 1 + n - r);
		}
		if (alice <= bob)
		{
			l++;
			alice += v[l];
		}
		else
		{
			r--;
			bob += v[r];
		}
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}