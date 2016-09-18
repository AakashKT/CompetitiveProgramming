#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int t, i, j;
	double a;
	bool te = false;

	cin >> t;

	for(i=0;i<t;i++)
	{
		te = false;
		cin >> a;

		for(j=3;j<=360;j++)
		{
			double temp = 180 - 360/j;
			if(a==temp)
			{
				te = true;
				break;
			}
		}

		if(te == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}