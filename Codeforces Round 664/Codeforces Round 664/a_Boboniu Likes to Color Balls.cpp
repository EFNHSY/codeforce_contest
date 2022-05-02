#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll r, g, b, w; cin >> r >> g >> b >> w;
	if (w % 2 == 0)
	{
		int odd_cnt = 0;
		if (r % 2 == 1) odd_cnt++;
		if (g % 2 == 1) odd_cnt++;
		if (b % 2 == 1) odd_cnt++;
		
		if (odd_cnt <= 1)
		{
			cout << "YES\n";
			return;
		}

		if(odd_cnt==3&& r>=1&& g>=1 && b>=1) 
		{
			cout << "YES\n";
			return;
		}
		cout << "NO\n";

	}
	else
	{
		int odd_cnt = 0;
		if (r % 2 == 1) odd_cnt++;
		if (g % 2 == 1) odd_cnt++;
		if (b % 2 == 1) odd_cnt++;

		if(odd_cnt==0)
		{
			cout << "YES\n";
		}
		else if (odd_cnt == 1)
		{
			cout << "NO\n";
		}
		else if (odd_cnt == 2)
		{
			if (r >= 1 && g >= 1 && b >= 1)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}
		else
		{
			cout << "YES\n";
		}
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}