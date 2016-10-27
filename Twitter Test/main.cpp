#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
//#include <tuple>

using namespace std;

int maxLength(vector < int > a, int k) {
    int sum=0, ind, curr;
    for(int i=0;i<a.size();i++) {
        sum += a[i];
        if(sum>k) {
            sum -= a[i];
            ind = i;
            curr = i;
            break;
        }
    }

    for(int i=0;i<a.size();i++) {
        sum -= a[i];
        int j=ind;
        while(sum<=k && j<a.size()) {
            sum += a[j];
            j++;
        }

        if(sum>k) {
          j--;
          sum -= a[j];
        }
        ind = j;

        if(j-i-1>curr) {
            curr = j-i-1;
        }
    }

    return curr;
}

int main()
{
  vector<int> v;
  int k, n;

  cin >> n;

  for(int i=0;i<n;i++)
  {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }
  cin >> k;

  int ret = maxLength(v, k);

  cout << ret << endl;
}
