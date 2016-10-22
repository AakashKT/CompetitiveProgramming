
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
	map<char, int> m;

	int i, t=0, tr=0, k, j;
	string s;

	for(i=0;i<26;i++)
	{
		m[i+65] = 0;
	}

	cin >> s;


	for(i=0;i<s.length();i++)
	{
		if(t>=26)
			break;

		if(s[i]=='?')
		{
			t++;
		}
		else
		{
			int temp = m[s[i]];

			if(temp >= 1)
			{
				t++;
				m[s[i]] += 1;
				while(m[s[i]] != 1)
				{
					m[s[tr]] -= 1;
					tr++;
					t--;
				}
			}
			else
			{	
				m[s[i]] += 1;
				t++;
			}
		}
	}

	if(t>=26)
	{
		for(k=tr;k<i;k++)
		{
			if(s[k]=='?')
			{
				for(j=0;j<26;j++)
				{
					if(m[j+65] == 0)
					{
						s[k] = (char)j+65;
						m[j+65] += 1;
						break;
					}
				}
			}
		}

		for(i=0;i<s.length();i++)
		{
			if(s[i]=='?')
				s[i] = 'A';
		}

		cout << s << endl;
	}
	else
	{
		cout << -1 << endl;
	}
}


		