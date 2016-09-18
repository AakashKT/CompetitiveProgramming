
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string inp;
	int p=0, sum=0, i;

	getline(cin, inp);

	int n;

	bool temp = false;

	for(i=0;i<inp.length();i++)
	{
		if(temp==true)
		{
			string te = inp.substr(i, inp.length()-1-i);
			n = stoi(te, nullptr, 10);
		}
		else if(inp[i]=='+')
			p++;
		else if(inp[i]=='-')
			p--;
		else if(inp[i]=='=')
		{
			temp = true;
			i+=1;
		}
	}

	if(p>0)
	{
		inp[0] = n-p+1;
		sum+=n-p+1;
		for(i=1;i<inp.length();i++)
		{
			if(inp[i]=='?')
			{
				sum+=1;
				inp[i] = '1';
			}
		}
	}
	else
	{
		bool d = false;
		inp[0] = n;
		sum+=n;
		for(i=1;i<inp.length();i++)
		{
			if(inp[i]=='?')
			{
				if(inp[i-2]=='+' && d==false)
				{
					sum+=-1*p+1;
					inp[i] = -1*p + 1;
					d=true;
				}
				else
				{
					sum+=1;
					inp[i] = '1';
				}
			}
		}
	}

	if(sum==n)
	{
		cout << "Possible" << endl;
		cout << inp << endl;
	}
	else
		cout << "Impossible" << endl;
}

		