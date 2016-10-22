
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
	int arr[100] = {0}, n, k;
	string p;

	cin >> n >> k;

	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;

		arr[s.length()-1]++;
	}

	cin >> p;
	int len = p.length();
	int t=0;

	int i=0;
	for(i=0;i<100;i++)
	{
		if(i==len-1)
		{
			break;
		}
		else
		{	
			t+=arr[i];
		}
	}

	int worst = t+arr[i]+5*((t+arr[i])/k);
	if((t+arr[i])%k == 0)
		worst -= 5;
	int best = t+5*(t/k) + 1;

	cout << t+1 << " " << worst << endl;
}

		