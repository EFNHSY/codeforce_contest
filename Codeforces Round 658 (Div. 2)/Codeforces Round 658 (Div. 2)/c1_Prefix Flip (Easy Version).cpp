
/*
*   Time :
*   Subject :
*
*   Coded by soonyubing
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }

string oper(string s, int k)
{
	for (int i = 0; i < k; i++)
	{
		if (s[i] == '0') s[i] = '1';
		else s[i] = '0';
	}
	reverse(s.begin(), s.begin() + k);
	return s;
}
void solve()
{
	int n; cin >> n;
	string a, b; cin >> a >> b;
	vector<int> ans;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == b[i]) continue;
		if (a[0] != b[i])
		{
			ans.push_back(i + 1);
			a = oper(a, i + 1);
		}
		else
		{
			ans.push_back(1);
			a[0] = (a[0] == '0' ? '1' : '0');
			ans.push_back(i + 1);
			a = oper(a, i + 1);
		}
	}

	cout << ans.size() << " ";
	for (auto u : ans)
	{
		cout << u << " ";
	}cout << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}