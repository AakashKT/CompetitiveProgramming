#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v(1000000);

	int n, i, tot=0;
	cin >> n;

	for(i=0;i<n;i++)
	{
		v[i] = i+1;
	}

	vector<int>::iterator p = v.begin();

	for(i=0;i<n;i++)
	{
		int temp;
		cin >> temp;

		if(*p != temp)
		{
			v.erase(v.begin()+temp-1);
			tot++;
		}
		else
		{
			p++;
		}
	}

	cout << tot << endl;
}