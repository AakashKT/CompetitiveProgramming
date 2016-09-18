#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, s, i, j, sec=0, f, t, u;

	vector<pair<int, int> > v(1000);

	cin >> n;
	cin >> s;

	for(i=0;i<n;i++)
	{
		cin >> f;
		cin >> t;

		v[i].first = f;
		v[i].second = t;
	}

	u = s;
	std::sort(v.rbegin(), v.rend());

	for(i=0;i<n;i++)
	{
		f = v[i].first;
		t = v[i].second;

		int temp = sec + u-f;

		if(t>temp)
			sec = t;
		else
			sec = temp;

		u=f;
	}

	if(u!=0)
	{
		sec += u;
	}

	cout << sec << endl;

	return 0;
}