
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
	int t;
	cin >> t;

	while(t--)
	{
		string st;
		int ans=0;
		cin >> st;

		for(int i=0;i<st.length();i++)
		{
			if(st[i]-48>0 && st[i]-48<10)
				ans += st[i]-48;

		}

		cout << ans << endl;
	}
}

		