
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
	string s; cin >> s;
	vector<int> cnt(10, 0);
	for (int i = 0; i < s.size(); i++) cnt[s[i] - '0']++;
	/// <summary>
	///  ABABAB 두개가 연달아 나오려면 짝수여야함
	///  AAAAA 한개가 연속으로 나오는 것은 짝홀 다됌
	/// </summary>
	int ans = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == j)
			{
				ans = max(ans, cnt[i]);
			}
			else
			{
				bool turn = true; // true --> i , false --> j
				vector<char> temp;
				for (auto u : s)
				{
					if (turn && u - '0' == i) {
						temp.push_back(u);
						turn = !turn;
					}
					else if (!turn && u - '0' == j) {
						temp.push_back(u);
						turn = !turn;
					}
				}
				if (temp.size() % 2 == 1) temp.pop_back();
				ans = max(ans, (int)temp.size());
			}
		}
	}
	cout << s.size()- ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


