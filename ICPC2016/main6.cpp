#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
//#include <tuple>

using namespace std;

int cnt = 0;

int binSearch(vector<int> &v, int n)
{
  int lo=0, hi=v.size()-1;
  int mid;

  while(lo<=hi)
  {
    mid = (lo+hi)/2;
    if(v[mid]==n)
      return mid;
    else if(v[mid] < n)
      lo = mid+1;
    else if(v[mid] > n)
      hi = mid-1;
  }

  return -1;
}

void check(vector<int> &v, vector<int> &v2, int n)
{
  for(int i=0;i<n;i++)
  {
    int ind = binSearch(v, (v2[0]+i)%n);

    if(ind != -1)
    {
      bool fin=true;
      for(int j=0;j<v2.size();j++)
      {
        if(v[(ind+j)%v.size()]!=(v2[j]+i)%n)
        {
          fin = false;
          break;
        }
      }

      if(fin==true)
        cnt++;
    }
  }
}

int main()
{
  vector<int> v, v2;
  int n, m;

  cin >> n >> m;

  for(int i=0;i<n;i++)
  {
    int temp;
    cin >> temp;

    if(temp == 1)
      v.push_back(i);
  }

  for(int i=0;i<m;i++)
  {
    int temp;
    cin >> temp;
    v2.push_back(temp);
  }

  check(v, v2, n);

  cout << cnt << endl;
}
