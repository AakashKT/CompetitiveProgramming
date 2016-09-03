#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;

	v.push_back(4);

	vector<int>::iterator x = find(v.begin(), v.end(), 5);
	vector<int>::iterator y = find(v.begin(), v.end(), 4);

	cout << *x << endl;
	cout << *y << endl; 
}