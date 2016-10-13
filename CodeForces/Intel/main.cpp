
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
	int f, hi, mi;
	string h="01", m;
	char tempp;

	cin >> f;

	scanf("%c", &tempp);
	int i=0;
	while(tempp != ':')
	{
		h[i] = tempp;
		scanf("%c", &tempp);
		i++;
	}

	cin >> m;

	if(f==24)
	{
		if(h[0]-'0' > 2)
		{
			h[0] = '0';
		}

		if(m[0]-'0' > 5)
		{
			m[0] = '0';
		}
	}
	else
	{
		if(h[0]-'0' != 0)
		{
			h[0]=0;
		}
		
		if(h[0]-'0'==0)
		{
			if(h[1]-'0'==0)
				h[1] = '1';
		}

		if(m[0]-'0' > 5)
		{
			m[0] = '0';
		}
	}

	cout << h << ":" << m << endl;
}

		