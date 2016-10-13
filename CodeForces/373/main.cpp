
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
	int n, arr[200], temp;

	cin >> n;

	if(n==1)
	{
		cin >> temp;
		
		if(temp == 15)
			cout << "DOWN" << endl;
		else if(temp == 0)
			cout << "UP" << endl;
		else
			cout << -1;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}

		if(arr[n-2] < arr[n-1])
		{
			if(arr[n-1] == 15)
				cout << "DOWN" << endl;
			else
				cout << "UP" << endl;
		}
		else
		{
			if(arr[n-1] == 0)
				cout << "UP" << endl;
			else
				cout << "DOWN" << endl;
		}
	}

}

		