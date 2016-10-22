
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
<<<<<<< HEAD
	int arr[100] = {0}, n, k;
	string p;
=======
	int arr[120];
	int n, k, total=0, total2=0;
	string temp;

	for(int i=0;i<120;i++)
		arr[i] = 0;
>>>>>>> dcaf9af7045483537da53b7790c90e98dc75d927

	cin >> n >> k;

	for(int i=0;i<n;i++)
	{
<<<<<<< HEAD
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
=======
		cin >> temp;
		arr[temp.length()]++;
	}

	cin >> temp;

	for(int i=1;i<temp.length();i++)
		total += arr[i];

	for(int i=1;i<=temp.length();i++)
		total2 += arr[i];
	total2 -= 1;

	total += (total/k)*5 + 1;
	total2 += (total2/k)*5 + 1;

	cout << total << " " << total2 << endl;
>>>>>>> dcaf9af7045483537da53b7790c90e98dc75d927
}

		