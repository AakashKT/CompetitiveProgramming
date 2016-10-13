
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
	int arr[120];
	int n, k, total=0, total2=0;
	string temp;

	for(int i=0;i<120;i++)
		arr[i] = 0;

	cin >> n >> k;

	for(int i=0;i<n;i++)
	{
		cin >> temp;
		arr[temp.length()]++;
	}

	cin >> temp;

	for(int i=1;i<temp.length();i++)
		total += arr[i];

	for(int i=1;i<=temp.length();i++)
		total2 += arr[i];
	total2 -= 1;

	total += (total/k)*5 + 1;
	total2 += (total2/k)*5 + 1;

	cout << total << " " << total2 << endl;
}

		