#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll dp[201][201][201];
ll r, g, b;
vector<ll> rr, gg, bb;
bool cmp(ll a, ll b) { return a > b; }
ll search(int i, int j, int k)
{
	ll& ret = dp[i][j][k];
	if (ret != -1) return ret;

	ret = 0;
	if (i < r && j < g)
	{
		ll temp = search(i + 1, j + 1, k) + (rr[i] * gg[j]);
		ret = max(temp, ret);
	} 
	if (i < r && k < b)
	{
		ll temp = search(i + 1, j , k+1) + (rr[i] * bb[k]);
		ret = max(temp, ret);
	}if (k < b && j < g)
	{
		ll temp = search(i , j + 1, k+1) + (bb[k] * gg[j]);
		ret = max(temp, ret);
	}
	return ret;
}
void solve()
{
	memset(dp, -1, sizeof(dp));
	cin >> r >> g >> b;
	rr = vector<ll>(r);
	gg = vector<ll>(g);
	bb = vector<ll>(b);
	for (ll& x : rr) cin >> x;
	for (ll& x : gg) cin >> x;
	for (ll& x : bb) cin >> x;

	sort(rr.begin(), rr.end(), cmp);
	sort(gg.begin(), gg.end(), cmp);
	sort(bb.begin(), bb.end(), cmp);

	cout <<search(0, 0, 0)<<"\n";
}
int main()
{
	solve();
	return 0;
}