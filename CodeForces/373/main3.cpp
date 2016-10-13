
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

int ch[1000000] = {1};

int inc(string dec, )

int main()
{
	long long int n, t, p=0;
	string inte, dec;
	inte.reserve(20);

	cin >> n >> t;

	for(int i=0;i<1000000;i++)
	{
		char temp;
		scanf("%c", &temp);
		if(temp == '.')
			break;
		else
		{
			inte[i] = temp;
		}
	}

	cin >> dec;

	for(int i=0;i<dec.length();i++)
	{
		if(dec[i]-'0' >= 5)
		{
			p=i;
			ch[i] = 0;
			break;
		}
	}

	while(t--)
	{
		int i=p;
		int temp = (dec[i]-'0') + 1;

		
	}

}

		