
/*
*   Time :
*   Subject :
*
*   Coded by soonyubing
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }\
string s;
int search2(int l, int r, char c)
{
	if (c > 'z') return 1e9+10;
	if (l == r)
	{
		if (s[l] == c) return 0;
		else return 1;
	}

	int mid = (l + r) / 2;
	int left = 0;
	for (int i = l; i < mid; i++)
	{
		if (s[i] != c) left++;
	}
	int right = 0;
	for (int i = mid; i < r; i++)
	{
		if (s[i] != c) right++;
	}
	int ans = 1e9;
	ans = min(ans, left + search2(mid, r, c + 1));
	ans = min(ans, right + search2(l, mid, c + 1));
	return ans;
}

void solve()
{
	s.clear();
	int n; cin >> n;
	cin >> s;
	cout << search2(0, n, 'a') << "\n";

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


