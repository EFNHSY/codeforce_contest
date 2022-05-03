#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }

const ll MOD = 1e9 + 7;

ll fact[1000001];
ll not_cycle[1000001];

void solve()
{
	ll n; cin >> n;
	fact[1] = 1;
	for (ll i = 2; i <= n; i++)
	{
		fact[i] = (fact[i - 1] * i) % MOD;
	}

	not_cycle[3] = 4;
	for (int i = 4; i <= n; i++)
	{
		not_cycle[i] = (not_cycle[i - 1] * 2) % MOD;
	}

	ll ans = (fact[n] - not_cycle[n]+MOD) % MOD;
	cout << ans << "\n";
}
int main()
{
	solve();
	return 0;
}