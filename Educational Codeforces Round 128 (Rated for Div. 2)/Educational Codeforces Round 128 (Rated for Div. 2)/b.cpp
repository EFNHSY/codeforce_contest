
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
char board[6][6];
int n, m;


bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.first + a.second < b.first + b.second;
}
void solve()
{
	cin >> n >> m;
	vector<pair<int, int>> robot;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> board[i][j];
			
			if (board[i][j] == 'R') robot.push_back({ i,j });
		}
	}
	if (robot.size() == 0) { cout << "NO\n"; return; }
	sort(robot.begin(), robot.end(), cmp);
	for (auto& u : robot)
	{
		if (((u.first - robot[0].first) < 0) || (u.second - robot[0].second) <0)
		{
			cout << "NO\n";
			return;
		}
		
	}
	
	cout << "YES\n";
	robot.clear();
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


