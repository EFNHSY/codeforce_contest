#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
int dp[26][26];
void solve()
{
	string s; cin >> s;
	cout << dp[s[0] - 'a'][s[1] - 'a'] << "\n";
}
int main()
{
	int k = 1;
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (i == j) continue;
			dp[i][j] = k;
			k++;
			
		}
	}
	int t; cin >> t;
	while (t--) solve();
	return 0;
}