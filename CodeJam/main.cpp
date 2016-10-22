
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

int fact(int n)
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}

int main()
{
	int t;

	cin >> t;

	for(int i=0;i<t;i++)
	{
		int n, m, tot;

		cin >> n >> m;

		tot = fact(n+m);
	}
}

		