
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

const int INF = 1e5 + 10;

vector<int> adj[INF];
int p[INF];
int h[INF];
int visited[INF];
int good[INF];
int n, m; 

bool ans = true;

void dfs(int x, int parent)
{
	visited[x] = p[x];
	int good_sum = 0;

	for (auto u : adj[x])
	{
		if (u == parent) continue;
		dfs(u, x);
		visited[x] += visited[u];
		good_sum += good[u];
	}

	// good[x] ´Â Á¤¼ö
	if ((visited[x] + h[x]) % 2 != 0) ans = false;
	good[x] = (visited[x] + h[x]) / 2;
	// 0<= good[x] <= visited[x]
	if ((good[x] <0) || (good[x] > visited[x])) ans = false;
	// good_sum <= good[x]
	if (good_sum > good[x]) ans = false;

}
void solve()
{
	ans = true;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> p[i];
	for (int i = 1; i <= n; i++) cin >> h[i];
	
	for (int i = 0; i < n - 1; i++)
	{
		int a, b; cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	dfs(1, 0);

	if (ans) cout << "YES\n";
	else cout << "NO\n";

	for (int i = 1; i <= n; i++)
	{
		adj[i].clear();
		visited[i] = good[i] = 0;
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


