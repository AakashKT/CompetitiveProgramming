
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

int m(int a)
{
	if(a < 0)
		return -a;
	else
		return a;
}

int main()
{
	int n, rc=0, bc=0;
	string in;

	cin >> n;
	cin >> in;

	for(int i=0;i<in.length();i++)
	{
		if(in[i] == 'r')
			rc+=i;
		else
			bc+=i;
	}

	int len = in.length();

	if(len%2 == 0)
		len = len/2;
	else
		len = (len-1)/2;

	int diff = m(m(rc-bc)-len);

	if(diff%2==0)
		cout << diff/2 << endl;
	else
		cout << (diff/2 + 1) << endl;
}

		