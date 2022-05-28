#include <bits/stdc++.h>
#define ll long long
using namespace std;
inline long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
void solve()
{
	int n0, n1, n2; cin >> n0 >> n1 >> n2;
	int n = n0 + n1 + n2 + 1;

	deque<char> dq;
	if (n1 == 0)
	{
		if (n0)
		{
			for (int i = 0; i < n; i++)
			{
				cout << '0';
			}cout << "\n";
			return;
		}
		if (n2)
		{
			for (int i = 0; i < n; i++)
			{
				cout << '1';
			}cout << "\n";
			return;
		}
	}
	if (n1 & 1)
	{
		for (int i = 0; i < (n1+1) / 2; i++)
		{
			dq.push_back('1');
			dq.push_back('0');
		}
		for (int i = 0; i < n0; i++)
		{
			dq.push_back('0');
		}
		for (int i = 0; i < n2; i++)
		{
			dq.push_front('1');
		}
		//cout << "ans : " << dq.size() << "\n";
		while (!dq.empty())
		{
			
			cout << dq.front(); dq.pop_front();
		}cout << "\n";
		return;
	}
	else
	{
		for (int i = 0; i < n1 / 2; i++)
		{
			dq.push_back('1');
			dq.push_back('0');
		}
		for (int i = 0; i < n0; i++)
		{
			dq.push_back('0');
		}
		dq.push_back('1');
		for (int i = 0; i < n2; i++)
		{
			dq.push_front('1');
		}
		//cout << "ans : " << dq.size() << "\n";
		while (!dq.empty())
		{
			
			cout << dq.front(); dq.pop_front();
		}cout << "\n";
		return;
	}
	

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
