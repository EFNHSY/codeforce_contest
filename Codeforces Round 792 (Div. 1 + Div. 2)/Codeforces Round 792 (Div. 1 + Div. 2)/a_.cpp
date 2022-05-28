
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
	
	if (s.size() == 2)
	{
		cout << s[1] << "\n";
	}
	else
	{
		sort(s.begin(), s.end());
		cout << s[0] << "\n";
	}



}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


