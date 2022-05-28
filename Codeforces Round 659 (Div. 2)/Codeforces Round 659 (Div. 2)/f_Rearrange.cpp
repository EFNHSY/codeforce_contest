
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
	vector<int> v(n);
	for (int& x : v) cin >> x;
	string first = string("a", v[0]);
	cout << first << "\n";
	for (int i = 0; i < n; i++)
	{
		string temp = string("a", v[i]);
		cout << temp << "\n";
	}
	
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


