#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s; cin >> s;
	int x; cin >> x;
	int n = s.size();
	string w(n, '1');
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '0')
		{
			if (i - x >= 0) w[i - x] = '0';
			if (i + x < n) w[i + x] = '0';
		}
	}
	string tmp(n, '1');
	for (int i = 0; i < n; i++)
	{
		if (i - x >= 0 && w[i - x] == '1')
		{
			tmp[i] = '1';
		}
		else if (i + x < n && w[i + x] == '1')
		{
			tmp[i] = '1';
		}
		else
		{
			tmp[i] = '0';
		}
	}
	if (tmp == s)
	{
		cout << w << "\n";
	}
	else
	{
		cout << "-1\n";
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}