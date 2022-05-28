
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

int n, k, l;
int depth[101];
int p[201];
vector<vector<int>> dp;

int dfs(int now, int t)
{
	if (now == n) return true;
	if (dp[t][now] != -1) return dp[t][now];

	dp[t][now] = 0;
	if (depth[now + 1] + p[t] <= l) dp[t][now] = dfs(now + 1, (t + 1) % (2 * k));
	if (depth[now] + p[t] <= l) dp[t][now] = max(dp[t][now], dfs(now, (t + 1) % (2 * k)));

	return dp[t][now];
}
void solve()
{
	cin >> n >> k >> l;
	for (int i = 1; i <= n; i++) cin >> depth[i];
	depth[0] = -100;
	for (int i = 0; i < 2 * k; i++)
	{
		if (i <= k) p[i] = i;
		else p[i] = p[i - 1] - 1;
	}
	dp = vector<vector<int>>(2 * k, vector<int>(n + 1, -1));
	if (dfs(0, 1)) cout << "YES\n";
	else cout << "NO\n";

	dp.clear();
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


