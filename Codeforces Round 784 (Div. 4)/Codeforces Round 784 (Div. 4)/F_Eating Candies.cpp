#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
vector<int> v;
int n;
bool check(int mid)
{
	int alice = 0,bob=0;
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
	v = vector<int>(n + 1);
	for (int i = 1; i <= n; i++) cin >> v[i];
	int lo = 0, hi = (n+1)/2;
	int ans = 0;
	while (lo <= hi)
	{
		int mid = (lo + hi) / 2;

		if (check(mid))
		{
			lo = mid + 1;
			ans = max(mid,ans);
		}
		else
		{
			hi = mid - 1;
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