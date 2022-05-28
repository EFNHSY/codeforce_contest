
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
int board[201][201];
int dy[] = { 1,1,-1,-1 };
int dx[] = { -1,1,-1,1 };
int n, m;

bool isRange(int y, int x)
{
	if (y >= 0 && y < n && x >= 0 && x < m) return true;
	return false;
}
ll dfs(int y, int x,int dir)
{
	ll ans = 0;
	
	int ny = y + dy[dir];
	int nx = x + dx[dir];
	if (isRange(ny, nx))
	{
		ans += dfs(ny, nx, dir)+board[ny][nx];
	}
	

	return ans;
}

void solve()
{
	memset(board, 0, sizeof(board));
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}
	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ll temp = board[i][j];
			for (int d = 0; d < 4; d++)
			{
				
				temp += dfs(i, j, d);
			}
			ans = max(temp, ans);
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


