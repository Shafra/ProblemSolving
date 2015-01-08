#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	map<string, string> mp;
	for (int i = 0; i < m; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		mp[s1] = s2;
	}
	bool ashta = true;
	for (int i = 0; i < n; i++)
	{
		string s,ans;
		cin >> s;
		if (mp[s].length() < s.length())
			ans = mp[s];
		else
			ans = s;
		if (ashta)
			cout << ans;
		else
			cout << ' ' << ans;
		ashta = false;
	}

	return 0;
}