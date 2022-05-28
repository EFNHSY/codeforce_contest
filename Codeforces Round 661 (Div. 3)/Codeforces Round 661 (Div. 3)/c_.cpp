#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
void solve()
{
	int n; cin >> n;
	vector<int> v(n);
	vector<int> cnt(102, 0);
	for (int& x : v)
	{
		cin >> x;
		cnt[x]++;
	}

	int ans = 0;
	for (int i = 0; i < 102; i++)
	{
		vector<int> temp_cnt = cnt;
		int team = 0;
		for (int j = 0; j < n; j++)
		{
			if (i - v[j] >= 0 && i - v[j] <= 51)
			{
				if ((v[j] == i - v[j]) && temp_cnt[v[j]] >= 2)
				{
					temp_cnt[v[j]] -= 2;
					team++;
				}
				else if (temp_cnt[v[j]] && temp_cnt[i - v[j]])
				{
					temp_cnt[i - v[j]]--;
					if (temp_cnt[i - v[j]] < 0) continue;
					temp_cnt[v[j]]--;
					if (temp_cnt[v[j]] < 0) continue;
					//cout << i << " " << v[j] << " " << i - v[j] << "\n";
					team++;
				}
			}

		}
		//cout << i << " " << team << "\n";
		ans = max(team, ans);
	}
	cout << ans << "\n";

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}