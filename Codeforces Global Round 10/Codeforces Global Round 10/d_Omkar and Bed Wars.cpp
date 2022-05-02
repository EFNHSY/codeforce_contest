#include <bits/stdc++.h>
using namespace std;

int attack_to[200001];
vector<int> attacked_by[200001];

void solve()
{
	int n; cin >> n;
	string dir; cin >> dir;
	for (int i = 0; i < n; i++)
	{
		if (dir[i] == 'R')
		{
			attack_to[i] = (i + 1) % n;
			attacked_by[(i + 1) % n].push_back(i);
		}
		else
		{
			attack_to[i] = (i - 1+n) % n; // (0-1)%n = 11
			attacked_by[(i - 1+n) % n].push_back(i);
		}
	}
	vector<int> pass(n, false);
	for (int i = 0; i < n; i++)
	{
		if (attacked_by[i].size() == 0 || attacked_by[i].size() == 2) pass[i] = true;
		else
		{
			for (auto u : attacked_by[i])
			{
				if (u == attack_to[i])
				{
					pass[i] = true;
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (pass[i]) continue;
		int j = i; 
		int streak = 1;
		pass[i] = true;
		j = (i - 1+n) % n;
		char d = dir[i];
		while (!pass[j] && dir[j] == d)
		{
			streak++;
			pass[j] = true;
			j = (j - 1 + n) % n;
		}
		j = (i + 1) % n;
		while (!pass[j] && dir[j] == d)
		{
			streak++;
			pass[j] = true;
			j = (j + 1) % n;
		}
		//cout << i << " " << streak << "\n";
		
		if (streak == 1) ans += 1;
		else if (streak == 2) ans += 1;
		else if (streak == 3) ans += 2;
		else ans += (streak) / 2;

	}
	cout << ans << "\n";

	for (int i = 0; i < n; i++)
	{
		attack_to[i] = 0;
		attacked_by[i].clear();
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}