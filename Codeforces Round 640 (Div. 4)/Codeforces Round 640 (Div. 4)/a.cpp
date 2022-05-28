#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }

void solve()
{
	int n; cin >> n;
	vector<int> ans;
	int k = 0;
	while (n)
	{
		int temp = n % 10;
		ans.push_back(temp);
		n /= 10;
	}
	//reverse(ans.begin(), ans.end());
	int cnt = 0;
	for (int i = 0; i < ans.size(); i++)
	{
		if (ans[i]) cnt++;
	}
	cout << cnt << "\n";
	for (int i = 0; i < ans.size(); i++)
	{
		if (ans[i] != 0)
		{
			cout << ans[i] * pow(10, i) << " ";
		}
		
	}cout << "\n";
	
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
