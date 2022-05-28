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
const int inf = 1e9;

vector<int> adj[4010];
vector<int> color;
int dp[4010];

int dfs(int x)
{
	int& ret = dp[x];
	if (ret != inf) return ret;
	ret = 0;
	for (auto u : adj[x])
	{
		ret += dfs(u);
	}
	ret += color[x];
	return ret;
}


void solve()
{
	for (int i = 0; i < 4001; i++) dp[i] = inf;
	int n; cin >> n;
	for (int i = 2; i <= n; i++)
	{
		int x; cin >> x;
		adj[x].push_back(i);
	}
	color = vector<int>(n + 1, 0);
	for (int i = 1; i <= n; i++)
	{
		char c; cin >> c;
		if (c == 'B') color[i] = -1;
		else color[i] = 1;
	}
	int ans = 0;
	dfs(1);
	for (int i = 1; i <= n; i++)
	{
		if (dp[i] == 0) ans++;
	}
	cout << ans << "\n";
	for (int i = 1; i <= n; i++)
	{
		adj[i].clear();
		dp[i] = 0;
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}