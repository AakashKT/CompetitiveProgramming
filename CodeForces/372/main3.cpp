
#define ull long long

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

void f(ull n, ull i, ull l)
{
	ull z = 1, tt;
	while(true)
	{
		ull temp = ((l+1)*z*(l+1)*z) - i;

		if(temp%l == 0)
		{
			tt= temp/l;
			cout << tt << endl;

			break;
		}

		z++;
	}

	if(l!=n)
		f(n, tt, l+1);
}

int main()
{
	ull n, i=2, l=1;
	cin >> n;

	f(n, i, l);
}

		