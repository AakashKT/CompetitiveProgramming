
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>

//#include <tuple>

using namespace std;

int egcd(int a, int b)
{
	if(a==0)
		return b;
	else
		return egcd(b%a, a);
}

int main()
{
	int a, b;

	cin >> a >> b;

	int g = egcd(a, b);

	cout << g << endl;
}

		