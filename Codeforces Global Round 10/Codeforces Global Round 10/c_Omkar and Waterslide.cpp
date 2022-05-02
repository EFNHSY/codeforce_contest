#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long n; cin >> n;
	vector<long long> v(n);
	for (long long& x : v) cin >> x;
	long long ans = 0;
	long long temp_h = v[0],j=0;
	for (long long i = 1; i < n; i++)
	{
		if (v[i] >= v[i - 1]) continue;
		else
		{
			temp_h = v[i - 1];
			j = i;
			while (j < n && v[j] < v[j - 1]) j++;
			//cout << j << "\n";
			ans += (temp_h - v[j - 1]);
			v[j - 1] = temp_h;
			i = j;
		}
	}
	
	cout << ans << "\n";
}
int main()
{
	long long t; cin >> t;
	while (t--) solve();
	return 0;
}