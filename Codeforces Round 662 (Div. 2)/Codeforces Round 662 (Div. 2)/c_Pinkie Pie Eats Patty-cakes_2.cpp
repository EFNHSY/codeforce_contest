#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
bool check(int m)
{
	vector<int> cnt(n + 1, 0);
	for (int i = 0; i < n; i++)
	{
		cnt[v[i]]++;
	}

	set<pair<int, int>, greater<pair<int, int>>> ss;
	for (int i = 1; i <= n; i++)
	{
		if (cnt[i]) ss.insert({ cnt[i],i });
	}

	vector<int> b;
	for (int i = 0; i < n; i++)
	{
		if (i - m >= 0 && cnt[b[i - m]])
		{
			ss.insert({ cnt[b[i - m]],b[i - m] });
		}

		if (ss.empty()) return false;
		b.push_back(ss.begin()->second);
		ss.erase(ss.begin());
		cnt[b.back()]--;
	}
	return true;
}
void solve()
{
	 cin >> n;
	 v = vector<int>(n);
	 for (int& x : v) cin >> x;

	 int lo = 0, hi = n-1;
	 int ans = 0;
	 while (hi >= lo)
	 {
		 int m = (lo + hi) / 2;
		 if (check(m))
		 {
			 lo = m+1;
			 ans = max(ans, m);
		 }
		 else
		 {
			 hi = m-1;
		 }
	 }
	 cout << ans - 1 << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}