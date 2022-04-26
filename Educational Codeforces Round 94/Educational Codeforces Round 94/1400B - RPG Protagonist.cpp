#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll p, f; cin >> p >> f;
	ll cnt_s, cnt_w; cin >> cnt_s >> cnt_w;
	ll s, w; cin >> s >> w;
	if (s > w)
	{
		swap(s, w);
		swap(cnt_s, cnt_w);
	}
	ll s1=0, s2=0, w1=0, w2=0;
	ll ans = 0;
	for (int i = 0; i <= cnt_s; i++)
	{
		if (s * i > p) continue;
		s1 = i;
		w1 = min(cnt_w, (p - s * s1) / w);
		s2 = min(cnt_s - s1, f / s);
		w2 = min(cnt_w - w1, (f - s2 * s) / w);
		ans = max(ans, s1 + s2 + w1 + w2);
		//cout << ans << " " << s1 << " " << w1 << " " << s2 << " " << w2 << "\n";
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}