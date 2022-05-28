#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.first > b.first) return true;
	return false;
}
void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	int k; cin >> k;
	vector<char> v;
	for (int i = 0; i < k; i++)
	{
		char c; cin >> c;
		v.push_back(c);
	}
	int temp = 0;
	vector<int> diff;
	for (int i = 0; i < n; i++)
	{
		for (auto u : v)
		{
			if (s[i] == u)
			{
				diff.push_back(i - temp);
				temp = i;
			}
		}
	}
	//diff.push_back(n - temp);
	if (diff.size() == 0) {
		cout << "0\n";
		return;
	}
	
	cout <<  * max_element(diff.begin(), diff.end()) <<"\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}