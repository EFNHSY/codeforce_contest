#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
void solve()
{
	int n; cin >> n;
	vector<int> v(n+1);
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}

	if (n <= 2)
	{
		cout << "YES\n";
		return;
	}
	if (n % 2 == 1)
	{
		int max_temp[2];
		max_temp[0] = 0, max_temp[1] = v[1];
		for (int i = 2; i <= n; i += 2)
		{
			for (int j = 0; j < 2; j++)
			{
				for (int k = 0; k < 2; k++)
				{
					if (max_temp[j] > v[i + k])
					{
						cout << "NO\n";
						return;
					}
				}
			}
			max_temp[0] = v[i];
			max_temp[1] = v[i + 1];
		}
		cout << "YES\n";
	}
	else
	{
		
		int max_temp[2];
		max_temp[0] = v[1], max_temp[1] = v[2];
		for (int i = 3; i <= n; i+=2)
		{
			for (int j = 0; j < 2; j++)
			{
				for (int k = 0; k < 2; k++)
				{
					if (max_temp[j] > v[i + k])
					{
						cout << "NO\n";
						return;
					}
				}
			}
			max_temp[0] = v[i];
			max_temp[1] = v[i + 1];
		}
		cout << "YES\n";
	}

	
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}