
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
	unsigned long long int n, c, i, w=0, temp1=0, temp2=0;

	cin >> n >> c;

	for(i=0;i<n;i++)
	{
		cin >> temp2;

		if(temp2-temp1>c)
		{
			w=1;
			temp1 = temp2;
		}
		else
		{
			w++;
			temp1 = temp2;
		}
	}

	cout << w << endl;	
}

		