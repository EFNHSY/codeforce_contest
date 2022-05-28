#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }



void solve()
{
	int n; cin >> n;
	vector<int> cnt(n + 1, 0);
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		cnt[v[i]]++;
	}

	int ans = 0;
	vector<bool> special(n+1, false);
	for (int i = 0; i < n; i++)
	{
		int temp_sum = 0;
		for (int j = i; j < n; j++)
		{
			temp_sum += v[j];
			if (i == j) continue;
			if (temp_sum <= n&&!special[temp_sum] && cnt[temp_sum]) {
				special[temp_sum] = true;
				ans += cnt[temp_sum];
				//cout << i <<" " << j <<" " << temp_sum << " " << cnt[temp_sum] << "\n";
			}

		}
	}
	cout << ans << "\n";
	
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
