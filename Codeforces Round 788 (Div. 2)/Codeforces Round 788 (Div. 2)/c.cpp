#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
const ll MOD = 1e9;
void solve()
{
	int n; cin >> n;
	vector<int> a_check(n+1 );
	vector<int> b_check(n+1 );
	vector<int> check(n + 1);
	vector<int> a(n+1);
	vector<int> b(n+1);
	vector<int> c(n+1);
	
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a_check[a[i]] = i;
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> b[i];
		b_check[b[i]] = i;
	}for (int i = 1; i <= n; i++)
	{
		cin >> c[i];
		if (c[i] != 0)
		{
			if (c[i] == a[i]&& c[i]==b[i])
			{
				check[i] = -1;

			}
			else if(c[i] == a[i] && c[i] != b[i])
			{
				check[i] = -1;
				check[a_check[b[i]]] = -1;
				check[b_check[a[i]]] = -1;

			}
			else if (c[i] != a[i] && c[i] == b[i])
			{
				check[i] = -1;
				check[a_check[b[i]]] = -1;
				check[b_check[a[i]]] = -1;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == b[i])
		{
			check[i] = -1;
		}
		if (a_check[i] == -1 && b_check[i] != -1)
		{
			check[i] = -1;
		}
		if (a_check[i] != -1 && b_check[i] == -1)
		{
			check[i] = -1;
		}
	}
	
	ll cnt1 = 0;
	ll cnt2 = 0;
	for (int i = 1; i <= n; i++)
	{
		if (check[i] != -1)
		{
			cnt1++;
			if (a[b_check[a[i]]] == b[i])
			{
				cnt2++;
			}
		}
 	}
	cnt2 /= 2;
	cout << cnt1 << " " << cnt2 << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}