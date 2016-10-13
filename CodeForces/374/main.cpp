
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <list>
#include <queue>

//#include <tuple>

using namespace std;

int main()
{
	int n, w=0, b=0;
	string inp;

	vector<int> v;

	cin >> n;
	cin >> inp;

	for(int i=0;i<inp.length();i++)
	{
		char temp = inp[i];

		if(temp=='W')
		{
			if(b!=0)
			{
				v.push_back(b);
				b=0;
			}
			b=0;
		}
		else
		{
			b++;
		}
	}

	if(b!=0)
		v.push_back(b);

	cout << v.size() << endl;

	for(vector<int>::iterator it=v.begin();it != v.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;

}

		