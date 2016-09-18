
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int binSearch(int arr[1000], int l, int h, int e)
{
	int mid = (l+h)/2;

	if(arr[mid] == e)
	{
		return mid;
	}
	else if(l>=h)
	{
		return (-1);
	}
	else if(e < arr[mid])
	{
		return binSearch(arr, l, mid-1, e);
	}
	else if(e > arr[mid])
	{
		return binSearch(arr, mid+1, h, e);
	}
}

int main()
{
	int arr[1000] = {5, 14};

	cout << binSearch(arr, 0, 1, 14) << endl;
	cout << binSearch(arr, 0, 1, 13) << endl;
	cout << binSearch(arr, 0, 1, 5) << endl;

	return 0;
}

		