
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

void solve()
{
	int n; cin >> n;
	string a, b; cin >> a >> b;
	vector<vector<int>> v(20, vector<int>(20, 0));
	for (int i = 0; i < n; i++)
	{
		if (b[i] - a[i] < 0)
		{
			cout << "-1\n"; 
			return;
		}
		if(b[i]-a[i]>0)
		{
			v[a[i] - 'a'][b[i] - 'a']++;
		}
	}
	int ans = 0;
	for (int i = 0; i < 20; i++)
	{
		for (int j = i + 1; j < 20; j++)
		{
			if (v[i][j])
			{
				ans++;
				for (int k = j + 1; k < 20; k++)
				{
					if (v[i][k])
					{
						v[j][k] = 1;
					}
				}
				break;
			}
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


