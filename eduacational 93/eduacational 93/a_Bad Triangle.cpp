#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> v(n+1);
	for (int i = 1; i <= n; i++) cin >> v[i];
	for (int i=n; i >= 3; i--)
	{
		if (v[i] >= v[1] + v[2])
		{
			cout << 1 << " " << 2 << " " << i << "\n";
			return;
		}
	}
	cout << "-1\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}