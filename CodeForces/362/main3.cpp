#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

long long count(long long root, long long u, long long v)
{
	if(root > u && root > v)
		return 0;

	long long c = count(root*2, u, v) + count(root*2+1, u, v);

	if(root==u || root==v)
		return 1+c;
	else
		return c;
}

long long ans(long long root, long long u, long long v)
{
	if(root==u || root==v)
		return root;

	long long c = count(root*2, u, v);

	if(c==0)
		return ans(root*2+1, u, v);
	else if(c==1)
		return root;
	else if(c==2)
		return ans(root*2, u, v);
}

int main()
{
	map<string, long long> m;

	long long q, i, final=0, u, v, w;

	cin >> q;

	for(i=0;i<q;i++)
	{
		long long temp = 0;
		cin >> temp;

		if(temp == 1)
		{	
			cin >> u;
			cin >> v;
			cin >> w;

			long long lca = ans(1, u, v);

			while(u != lca)
			{
				m[to_string(u)] += w;
				u /= 2;
			}
			while(v != lca)
			{
				m[to_string(v)] += w;
				v /= 2;
			}
		}
		else
		{
			final = 0;

			cin >> u;
			cin >> v;

			long long lca = ans(1, u, v);

			while(true)
			{
				if(u == lca)
					break;

				if(m.find(to_string(u)) != m.end())
					final += m.find(to_string(u))->second;

				u /= 2;
			}

			while(true)
			{
				if(v == lca)
					break;
				
				if(m.find(to_string(v)) != m.end())
					final += m.find(to_string(v))->second;

				v /= 2;
			}

			cout << final <<endl;
		}
	}

	return 0;
}