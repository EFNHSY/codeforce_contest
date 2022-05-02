#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b) { return a > b; }
void solve()
{
	string s; cin >> s;
	vector<int> one;
	int n = s.size();
	int streak = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '0') {
			one.push_back(streak);
			streak = 0;
			continue;
		}
		streak++;
	}
	one.push_back(streak);
	sort(one.begin(), one.end(), cmp);
	int ans = 0;
	for (int i = 0; i < one.size(); i++)
	{
		if (i % 2 == 0)
		{
			ans += one[i];
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