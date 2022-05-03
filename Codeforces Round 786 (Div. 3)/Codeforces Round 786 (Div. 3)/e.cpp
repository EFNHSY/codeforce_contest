#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
vector<int> v,temp;
#define inf 1e9
int calc1(int a, int b)
{
	int ret = (a + b) / 3 + ((a + b) % 3>0);
	return ret;
}

int calc2(int a, int b)
{
	if (a < b) swap(a, b);
	int ret = a / 2 + b / 2;
	if (a > 0 || b > 0) ret++;
	return ret;
}

void solve()
{
	int n; cin >> n;
	vector<int> v(n); for (int& x : v) cin >> x;
	int ans = inf;
	int min1 = inf;
	int min2 = inf;

	for (int i = 0; i < n; i++)
	{
		if (i) ans = min(ans, calc1(v[i], v[i - 1]));
		if (i > 1) ans = min(ans, calc2(v[i], v[i - 2]));
		if (min1 > v[i]) swap(min1, min2), min1 = v[i];
		else if (min2 > v[i]) min2 = v[i];
	}
	cout << min(ans, min1 / 2 + min2 / 2 + min1 % 2 + min2 % 2);
}
int main()
{
	solve();
	return 0;
}