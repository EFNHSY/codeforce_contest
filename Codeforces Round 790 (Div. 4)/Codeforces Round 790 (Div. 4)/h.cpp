#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> segTree;
vector<pair<ll, ll>> arr;
const ll inf = 1e9;

void update(int ptr, int s, int e, int i, int diff)
{
	if (s > i || i > e) return;
	segTree[ptr] += diff;
	//cout << ptr << " : " << segTree[ptr] << "\n";
	if (s ^ e)
	{
		update(ptr * 2, s, (s + e) / 2, i, diff);
		update(ptr * 2 + 1, (s + e) / 2 + 1, e, i, diff);
	}

}

ll sum(int ptr, int s, int e, int l, int r)
{
	if (s > r || e < l) return 0;
	if (l <= s && e <= r) return segTree[ptr];
	return sum(ptr * 2, s, (s + e) / 2, l, r) + sum(ptr * 2 + 1, (s + e) / 2 + 1, e, l, r);
}


void solve()
{
	int n; cin >> n;
	segTree = vector<ll>(4 * (n + 10));
	arr.push_back({ -inf,0 });
	for (int i = 1; i <= n; i++)
	{
		ll x; cin >> x;
		arr.push_back({ i,x });
	}

	sort(arr.begin(), arr.end());

	ll ans = 0;

	for (int i = 1; i <= n; i++)
	{

		int j = arr[i].second;
		//cout << " cur :: " << j << "\n";
		ans += sum(1, 1, n, j , n);
		//cout << ans << "\n";
		update(1, 1, n, j, 1);
		//cout << "------------------------------\n";
	}
	cout << ans << "\n";
	arr.clear();
}
int main()
{
	int t; cin >> t;
	while(t--) solve();
	return 0;
}