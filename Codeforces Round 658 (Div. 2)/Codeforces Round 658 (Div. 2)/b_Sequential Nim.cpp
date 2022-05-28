
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
	int turn = 1;
	for (int& x : v) cin >> x;
	reverse(v.begin(), v.end());

	while (!v.empty())
	{
		if (v.back() == 1)
		{
			turn = -turn; 
			v.pop_back();
		}
		else
		{
			if (turn == 1)
			{
				cout << "First\n";
			}
			else cout << "Second\n";
			return;
		}
	}
	if (turn == 1)
	{
		cout << "Second\n";
	}
	else cout << "First\n";



}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


