
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
	int n, k, z; cin >> n >> k >> z;
	vector<ll> v(n+1);
	
	for (int i = 1; i <= n; i++) cin >> v[i];
	ll ans = 0;
	for (int i = 0; i <= z; i++)
	{
		
		int rep = ((k + 1) - 2 * i);
		ll temp_max = 0;
		ll temp = 0;
		for (int j = 1; j <= rep; j++)
		{
			if (j<=rep&&temp_max < v[j] + v[j + 1]) // if( j<=rep-1 && temp_max < v[j] + v[j + 1] )는 틀린코드 ??
			{
				temp_max = v[j] + v[j + 1];
			}
			temp += v[j];
		}
		ans = max(ans, temp + i* temp_max);
	}
	cout << ans << "\n";


}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


