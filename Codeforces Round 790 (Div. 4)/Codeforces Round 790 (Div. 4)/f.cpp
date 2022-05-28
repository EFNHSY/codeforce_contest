
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
	int n, k; cin >> n >> k;
	vector<int> v(n);
	map<int, int> m;
	for(int i=0;i<n;i++)
	{ 
		cin >> v[i];
		m[v[i]]++;
	}
	
	int l = *min_element(v.begin(), v.end());
	int r = *max_element(v.begin(), v.end());
	vector<int> temp;
	for (int i = l; i <= r; i++)
	{
		if (m[i] >= k) temp.push_back(i);
	}
	sort(temp.begin(), temp.end());
	
	if (temp.size() == 0)
	{
		cout << "-1\n";
		return;
	}
	
	pair<int, int> ans = { 0,0 };
	int cont = 0; int j;
	for (int i = 0; i < temp.size(); i++)
	{
		j = i;
		while (j+1 < temp.size() && temp[j] == temp[j+1])
		{
			j++;
		}
		if (cont < j - i + 1)
		{
			
			ans = { i,j };
			cont = j - i + 1;
		}
		i = j;
	}
	
	cout << ans.first << " " << ans.second << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}


