
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
	string a, b; cin >> a >> b;
	vector<int> ans;
	bool flipped = false;
	int l = 0, r = n-1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (!flipped && a[r] == b[i] || flipped && a[r] != b[i])
		{
			if (flipped) r++;
			else r--;
			continue;
		}

		if (a[l] != a[r])
		{
			ans.push_back(1);
			a[l] = a[r];
		}
		ans.push_back(i + 1);
		flipped = !flipped;
		swap(l, r);

		if (flipped) r++;
		else r--;
	}
	
	cout << ans.size() << " ";
	for (auto u : ans)
	{
		cout << u << " ";
	}cout << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


