
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
	string s; cin >> s;
	string k = "abacaba";
	vector<int> a;
	vector<int> b;
	for (int i = 0; i <= n - 7; i++)
	{
		string temp = s.substr(i, 7);
		int same = 0;
		int q = 0;
		for (int j = 0; j < temp.size(); j++)
		{
			if (temp[j] == k[j]) same++;
			else if (temp[j] == '?') q++;
		}
		if (same == 7)
		{
			a.push_back(i);
		}
		else if ((same + q) == 7)
		{
			b.push_back(i);
		}
	}
	//cout << a.size() << " " << b.size() << "\n";
	if(a.size()>1)
	{
		cout << "NO\n";
	}
	else if (a.size() == 1)
	{
		cout << "YES\n";
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '?') cout << "z";
			else cout << s[i];
		}cout << "\n";
	}
	else if(a.empty())
	{
		if (b.empty())
		{
			cout << "NO\n";
		}
		else
		{
			for (auto u : b)
			{
				string temp = s;
				int idx = u; int j = 0;
				for (int i = idx; i < idx + 7; i++)
				{
					temp[i] = k[j]; j++;
				}
				for (int i = 0; i < temp.size(); i++) if (temp[i] == '?') temp[i] = 'z';
				int cnt = 0;
				for (int i = 0; i <= n - 7; i++)
				{
					string temp2 = temp.substr(i, 7);
					if (temp2 == k) cnt++;
				}
				if (cnt == 1)
				{
					cout << "YES\n";
					cout << temp << "\n";
					return;
				}
			}
			cout << "NO\n";

		}
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


