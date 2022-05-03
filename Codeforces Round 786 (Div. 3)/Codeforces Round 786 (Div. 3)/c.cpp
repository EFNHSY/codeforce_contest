#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
set<string> s;
void solve()
{
	string s, t; cin >> s >> t;
	
	for (int i = 0; i < t.size(); i++)
	{
		if (t[i] == 'a' )
		{
			if (t.size() > 1)
			{
				cout << "-1\n";
				return;
			}
			else
			{
				cout << "1\n";
				return;
			}
		}
	}

	ll n = s.size();
	ll ans = (ll)1 << n;
	cout << ans << "\n";

	
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}