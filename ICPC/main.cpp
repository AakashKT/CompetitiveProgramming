
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
	int ec=0, oc=0;
	int n;

	cin >> n;

	for(int i=0;i<n;i++)
	{
		int temp;
		cin >> temp;

		if(temp%2==0)
			ec++;
		else
			oc++;
	}

	if(ec > oc)
		cout << "READY FOR BATTLE" << endl;
	else
		cout << "NOT READY" << endl;

}

		