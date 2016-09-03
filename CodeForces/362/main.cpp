#include <iostream>

using namespace std;

int main()
{
	int t, s, x;

	cin >> t;
	cin >> s;
	cin >> x;

	bool cond = false;

	bool res1 = (x-t)%s == 0;
	bool res2 = (x-t-s-1)%s == 0;

	if(x-t-s-1 < 0)
		res2 = false;
	if(x-t < 0)
		res1 = false;

	cond = res1 || res2;

	if(cond == true)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}