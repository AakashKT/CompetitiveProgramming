
#include <iostream>
#include <vector>
#include <map>
#include <tuple>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int check(vector<int>& v, double r, int o)
{
	int ret = 0;
	int i=0;
	while(true)
	{
		if(v[i]>r || i>v.size()-1)
			break;

		if(o%v[i] == 0)
		{
			int temp = o/v[i];

			if(find(v.begin(), v.end(), temp) != v.end())
			{
				ret++;
			}
		}

		i++;
	}

	return ret;
}

int main()
{
	map<int, int> m;
	vector<int> v;
	vector< tuple<int, int, int> > three;

	int n, i, j, k, total=0;

	cin >> n;

	for(i=0;i<n;i++)
	{
		int temp;
		cin >> temp;

		m[temp] = temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			for(k=1;k<=9;k++)
			{
				int res = i+j-k;

				if(m.find(res) != m.end())
				{
					tuple<int, int, int> t;
					get<0>(t) = i;
					get<1>(t) = j;
					get<2>(t) = k;

					three.push_back(t);
				}
			}
		}
	}

	for(i=0;i<three.size();i++)
	{			
		int x = get<0>(three[i]);
		int y = get<1>(three[i]);
		int z = get<2>(three[i]);

		double rx = sqrt(x);
		double ry = sqrt(y);
		double rz = sqrt(z);

		int res1 = check(v, rx, x);
		int res2 = check(v, ry, y);
		int res3 = check(v, rz, z);

		if(res1!=0 || res2!=0 || res3!=0)
		{
			total = total + res1*res2*res3;
		}
		

	}

	cout << total << endl;
}

		