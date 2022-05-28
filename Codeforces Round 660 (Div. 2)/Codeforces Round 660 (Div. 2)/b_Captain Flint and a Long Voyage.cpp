
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
	int eight = (n - 1) / 4 + 1;
	n -= eight;
	string ans; 
	for (int i = 0; i < n; i++)
	{
		ans.push_back('9');
	}
	for (int i = 0; i < eight; i++)
	{
		ans.push_back('8');
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


