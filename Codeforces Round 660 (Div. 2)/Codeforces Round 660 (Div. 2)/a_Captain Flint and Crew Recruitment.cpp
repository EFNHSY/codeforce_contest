
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
	
	if (n <= 30)
	{
		cout << "NO\n";
		return;
	}
	
	if (n == 36 || n == 40 || n == 44)
	{
		cout << "YES\n";
		int diff = n - 31;
		cout << "6 10 15 " << diff << "\n";
		return;
	}
	int diff = n - 30;
	
	cout << "YES\n";
	cout << "6 10 14 " << diff << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


