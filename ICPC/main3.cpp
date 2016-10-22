
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
	int t;
	int arr[1000][1000];
	cin >> t;

	for(int i=0;i<t;i++)
	{
		int n, m;
		cin >> n >> m;

		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				cin >> arr[j][k];
			}
		}
	}
}

		