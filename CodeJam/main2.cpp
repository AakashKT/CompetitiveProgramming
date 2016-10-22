
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

int arr[100][100];

bool check(int r, int c, int m)
{
	bool ret = false;
	int p = m;
	int con = 0;

	for(int i=1;i<=r;i++)
	{

			if(p<=0)
			{
				ret = true;
				break;
			}

			if(i==1)
			{
				p -= c;
			}
			else
			{
				if(con==0)
				{
					p-=1;
					con++;
				}
				else if(con==1)
				{
					p = p-c+1;
					con++;
				}
				else if(con==2)
				{
					p -= c;
					con++;
				}
				else if(con==3)
				{
					p -= 1;
					con = 0;
				}
			}
	}

	if(p<=0)
		ret = true;

	return ret;
}

void set()
{
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
			arr[i][j] = 0;
	}
}

int main()
{
	int t, r ,c;

	cin >> t;

	for(int i=0;i<t;i++)
	{
		cin >> r >> c;

		int u = r*c;
		int l = 0;
		int m = (u+l)/2;

		while(l<=u)
		{
			m = (u+l)/2;
			set();

			if(check(r, c, m))
				l = m+1;
			else
				u = m-1;

			cout << l << u << endl;
		}

		cout << "Case #" << i+1 << ": " << l-1 << endl;
	}
}

		