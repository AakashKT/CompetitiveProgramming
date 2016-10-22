
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

void dfs(vector<int> v[], bool arr[], vector<pair<int, int> > &fi, int node)
{
	for(int i=0;i<v[node].size();i++)
	{
		if(arr[ ])
		pair<int, int> p;
		p.first = node;
		p.second = v[node][i];
		fi.push_back(p);

		dfs(v, arr, fi, v[node][i]);
	}
}

int main()
{
	int t;
	cin >> t;

	for(int i=0;i<t;i++)
	{
		vector<int> v[10001];
		bool arr[10001] = {false};
		vector<pair<int, int> > fi;

		int n, m;
		cin >> n >> m;

		for(int j=0;j<m;j++)
		{
			int t1, t2;
			cin >> t1 >> t2;

			v[t1].push_back(t2);
		}

		dfs(v, arr, fi, 1);

		for(int j=0;j<fi.size();j++)
		{
			cout << fi[j].first << " " << fi[j].second << endl;
		}
	}
}

		