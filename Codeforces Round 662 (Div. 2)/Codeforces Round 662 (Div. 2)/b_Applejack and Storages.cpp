#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
int planks[100001];
void solve()
{
	ll tot_cnt = 0;
	ll n; cin >> n;
	tot_cnt = n;
	ll four = 0;
	ll even = 0;
	
	map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		m[x]++;
	}
	
	for (auto u : m)
	{
		if (u.second >= 4) four += u.second / 4;
		even += u.second / 2;
	}
	
	int q; cin >> q;
	while (q--)
	{
		char x; int num; cin >> x >> num;
		four -= m[num] / 4;
		even -= m[num] / 2;
		if (x == '+')
		{
			tot_cnt++;
			m[num]++;
		}
		else
		{
			tot_cnt--;
			m[num]--;
		}
		four += m[num] / 4;
		even += m[num] / 2;
		if (four && (even - 2) >= 2)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}

}
int main()
{
	 solve();
	return 0;
}