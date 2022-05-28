
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
	
	vector<int> ans;
	ans.push_back(v.back());
	v.pop_back();
	// increase
	while (!v.empty() && v.back() >= ans.back())
	{
		ans.push_back(v.back());
		v.pop_back();
	}
	// decrease
	while (!v.empty() && v.back() <= ans.back())
	{
		ans.push_back(v.back());
		v.pop_back();
	}
	cout << v.size() << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


