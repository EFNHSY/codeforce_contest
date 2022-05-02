#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n, k; cin >> n >> k;
	vector<ll> v(n);
	ll min_ = 1e9 + 1;
	ll max_ = -1e9 - 1;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		min_ = min(v[i], min_);
		max_ = max(v[i], max_);
	}
	vector<int> ans1(n), ans2(n);
	for (int i = 0; i < n; i++)
	{
		ans1[i] = max_ - v[i];
	}
	ll d = max_ - min_;
	for (int i = 0; i < n; i++)
	{
		ans2[i] = d - ans1[i];
	}
	if (k%2==1)
	{
		for (auto u : ans1)
		{
			cout << u << " ";
		}cout << "\n";
	}
	else
	{
		
		for (auto u : ans2)
		{
			cout << u << " ";
		}cout << "\n";
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}