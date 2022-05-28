#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }

void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	vector<int> pos0, pos1;
	ll ci = 0;
	vector<int> ans(n);
	for (int i = 0; i < n; i++)
	{
		
		if (s[i] - '0' == 0)
		{
			if (pos1.size())
			{
				ans[i] = pos1.back();
				pos1.pop_back();
				pos0.push_back(ans[i]);
			}
			else
			{
				pos0.push_back(ci++);
				ans[i] = pos0.back();
			}
		}
		else
		{
			if (pos0.size())
			{
				ans[i] = pos0.back();
				pos0.pop_back();
				pos1.push_back(ans[i]);
			}
			else
			{
				pos1.push_back(ci++);
				ans[i] = pos1.back();
			}
		}
	}
	cout << ci << "\n";
	for (auto u : ans)
	{
		cout << u +1 << " ";
	}cout << "\n";


}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}