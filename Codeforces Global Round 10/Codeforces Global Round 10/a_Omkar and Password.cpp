#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	bool flag = false;
	for (int i = 0; i < n-1; i++)
	{
		if (v[i] != v[i+1])
		{
			flag = true;
		}
	}
	if (flag)
	{
		cout << "1\n";
	}
	else
	{
		cout << n << "\n";
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}