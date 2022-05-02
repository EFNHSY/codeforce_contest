#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll ans = 0;
	ll x1, y1, z1, x2, y2, z2; 
	cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

	
	if (z1 >= y2)
	{
		ans += y2 * 2;
		z1 -= y2;
		y2 = 0;
		if (x1 + z1 >= z2)
		{
			cout << ans << "\n"; return;
		}
		else
		{
			z2 -= (x1 + z1);
			y1 -= x2; y1 -= y2;
			ans -= 2 * (y1 * z2);
			cout << ans << "\n";
			return;
		}
	}
	else
	{
		ans += z1 * 2;
		y2 -= z1;
		z1 = 0;
		if (x1 >= z2)
		{
			cout << ans << "\n";
			return;
		}
		else
		{

			z2 -= x1;
			// x1=0,z1=0 
			y1 -= x2; y1 -= y2;
			ans -= 2 * (y1 * z2);
			cout << ans << "\n";
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