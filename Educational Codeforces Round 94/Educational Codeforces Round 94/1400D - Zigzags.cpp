#include <bits/stdc++.h>
using namespace std;

long long dp[3001][3001], dp2[3001][3001];

void solve()
{
	long long n; cin >> n; 
	vector<long long> v(n + 1);
	for (long long i = 1; i <= n; i++)
	{
		cin >> v[i];
		for (long long j = 1; j <= n; j++)
		{
			dp[i][j] = dp[i - 1][j];
		}
		dp[i][v[i]] ++;
		dp2[n + 1][i] = 0;
	}

	for (long long i = n; i > 0; i--)
	{
		for (long long j = 1; j <= n; j++)
		{
			dp2[i][j] = dp2[i + 1][j];
		}
		dp2[i][v[i]]++;
	}
	long long ans = 0;
	for (long long i = 2; i < n; i++)
	{
		for (long long j = i + 1; j < n; j++)
		{
			ans += dp[i - 1][v[j]] * dp2[j + 1][v[i]];
		}
	}
	cout << ans << "\n";
}
int main()
{
	long long t; cin >> t;
	while (t--) solve();
	return 0;
}