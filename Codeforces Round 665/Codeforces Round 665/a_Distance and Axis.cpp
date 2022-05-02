#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k; cin >> n >> k;
	if (n <= k)
	{
		cout << k - n << "\n";
		
	}
	else
	{
		cout << (n - k) % 2 << "\n";
	}

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}