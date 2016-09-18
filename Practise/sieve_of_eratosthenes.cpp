
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>

//#include <tuple>

using namespace std;

int main()
{
	int n;

	vector<bool> m;

	cin >> n;

	for(int i=0;i<n;i++)
	{
		m.push_back(true);
	}

	for(int i=2;i<n;i++)
	{
		if(m[i] == true)
		{
			cout << i << " ";

			for(int j=i+1;j<n;j++)
			{
				if(j%i == 0)
					m[j] = false;
			}
		}
	}

	cout << endl;
}

		