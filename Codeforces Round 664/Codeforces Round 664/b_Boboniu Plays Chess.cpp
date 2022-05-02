#include <bits/stdc++.h>
using namespace std;

int board[101][101];
bool visited[101][101];
int dy[] = { -1,1,0,0 };
int dx[] = { 0,0,-1,1 };
int n, m;
bool isRange(int y, int x)
{
	if (y >= 1 && y <= n && x >= 1 && x <= m) return true;
	return false;
}
void solve()
{
	int x, y; cin >> n >> m >> x >> y;
	cout << x << " " << y << "\n";
	cout << 1 << " " << y << "\n";
	cout << 1 << " " << 1 << "\n";
	visited[x][y] = true;
	visited[1][y] = true;
	visited[1][1] = true;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 1; j <= m; j++)
			{
				if (!visited[i][j])
				{
					visited[i][j] = true;
					cout << j << " " << i << "\n";
				}
			}
		}
		else
		{
			for (int j = m; j >=1; j--)
			{
				if (!visited[i][j])
				{
					visited[i][j] = true;
					cout << j << " " << i << "\n";
				}
			}
		}
	}
}
int main()
{
	 solve();
	return 0;
}