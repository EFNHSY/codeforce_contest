#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }

int start[12][12];

void solve()
{
	memset(start, 0, sizeof start);
	int n; cin >> n;
	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		string s; cin >> s;
		ll cnt = 0;
		for (int j = 0; j < 12; j++)
		{
			if (j != s[1] - 'a')
			{
				cnt += start[s[0] - 'a'][j];
			}
			if (j != s[0] - 'a')
			{
				cnt += start[j][s[1] - 'a'];
			}
		}
		start[s[0] - 'a'][s[1] - 'a']++;
		ans += cnt;
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}