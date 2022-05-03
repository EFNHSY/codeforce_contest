#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
int n, m;
char board[101][101];
int dy[] = { -1,1,0,0 };
int dx[] = { 0,0,-1,1 };

bool isRange(int y, int x)
{
	if (y >= 0 && y < n && x >= 0 && x < m) return true;
	return false;
}
void solve()
{
	 cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}
	queue<pair<int, int>> q;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			q.push({ i,j });
			while (!q.empty())
			{
				auto cur = q.front(); q.pop();
				if (cur.first == n - 1 && cur.second == m - 1) break;
				if (board[cur.first][cur.second] == 'D')
				{
					int ny = cur.first + 1;
					int nx = cur.second;
					if (isRange(ny, nx))
					{
						q.push({ ny,nx });
					}
					else
					{
						board[cur.first][cur.second] = 'R';
						ans++;
						q.push({cur.first,cur.second+1});
					}
				}
				else
				{
					int ny = cur.first;
					int nx = cur.second+1;
					if (isRange(ny, nx))
					{
						q.push({ ny,nx });
					}
					else
					{
						board[cur.first][cur.second] = 'D';
						ans++;
						q.push({ cur.first+1,cur.second });
					}
				}
			}
			while(!q.empty()) q.pop();
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