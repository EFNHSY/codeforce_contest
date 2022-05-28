
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
string s;
int zero = 0;
int one = 0;
bool check(int mid)
{
	// 지운 1의 갯수 : mid 남아있는 0의 갯수 cnt

}
void solve()
{
	
	cin >> s;
	zero = one = 0;
	for (int i = 0; i < s.size(); i++)
	{
		
		if (s[i] == '0') zero++;
		else one++;
	}


	int lo = 0, hi = one;
	int ans = 1e9;
	while (lo <= hi)
	{
		int mid = (lo + hi) / 2;
		if (check(mid))
		{

		}
		else
		{

		}
	}
	

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


