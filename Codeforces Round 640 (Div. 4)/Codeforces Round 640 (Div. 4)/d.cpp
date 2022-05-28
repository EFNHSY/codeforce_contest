#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
void solve()
{
	int n; cin >> n;
	vector<int> v(n);
	for (int& x : v) cin >> x;
	int i = 0, j = n-1;
	int a = 0, b = 0;
	int move = 0;
	int alice = 0, bob = 0;
	bool turn = true;

	while(i<=j)
	{ 
		move++;
		if (turn)
		{
			a = 0;
			while (i <= j && a <= b)
			{
				a += v[i];
				alice += v[i];
				i++;
			}
			b = 0;
		}
		else
		{
			b = 0;
			while (i <= j && b <= a)
			{
				b += v[j];
				bob += v[j];
				j--;
			}
			a = 0;
		}
		if (turn) turn = false;
		else turn = true;
	}
	cout << move << " " << alice << " " << bob << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
