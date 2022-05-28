
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
string s[50];
void solve()
{
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	ll ans = 1e9;
	for (int i = 0; i < n; i++)
	{
		
		for (int j = i + 1; j < n; j++)
		{
			ll temp = 0;
			for (int k = 0; k < m; k++)
			{
				temp += abs((s[i][k]-'0') - (s[j][k]-'0'));
			}
			
			ans = min(temp, ans);
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


