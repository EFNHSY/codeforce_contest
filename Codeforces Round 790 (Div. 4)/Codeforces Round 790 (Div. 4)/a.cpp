
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
	int a = 0, b = 0;
	for (int i = 0; i < 3; i++)
	{
		a += s[i] - '0';
	}
	for (int i = 3; i < 6; i++)
	{
		b += s[i] - '0';
	}
	if (a == b) cout << "YES\n";
	else cout << "NO\n";

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


