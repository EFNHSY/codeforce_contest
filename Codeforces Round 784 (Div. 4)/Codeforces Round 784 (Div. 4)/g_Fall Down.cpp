#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
char board[51][51];
int n, m;
bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.first > b.first;
}
bool isRange(int y, int x)
{
	if (y >= 0 && y < n && x >= 0 && x < m) return true;
	return false;
}
void solve()
{
	memset(board, '.', sizeof board);
	cin >> n >> m;
	vector<pair<int, int>> pos;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == '*') {
				pos.push_back({ i,j });
				board[i][j] = '.';
			}
		}
	}
	sort(pos.begin(), pos.end(), cmp);
	queue<pair<int, int>> q;
	for (int i = 0; i < pos.size(); i++)
	{
		q.push(pos[i]);
	}
	while (!q.empty())
	{
		auto cur = q.front(); q.pop();

		int ny = cur.first + 1;
		int nx = cur.second;
		if (!isRange(ny,nx))
		{
			board[cur.first][cur.second] = '*';
			continue;
		}
		if (board[ny][nx] == 'o')
		{
			board[cur.first][cur.second] = '*';
			continue;
		}
		if (board[ny][nx] == '*')
		{
			board[cur.first][cur.second] = '*';
			continue;
		}
		q.push({ ny,nx });
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << board[i][j];
		}cout << "\n";
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}