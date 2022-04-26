#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	string s; cin >> s; // 2*n-1 Å©±â 
	string ans;
	for (int i = 0; i < s.size(); i += 2)
	{
		ans += s[i];
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}