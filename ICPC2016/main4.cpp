#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
//#include <tuple>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    int a;
    cin >> a;

    if(a > 3)
    {
      for(int i=0;i<a;i++)
      {
        int temp;
        cin >> temp;
      }
      cout << "no" << endl;
    }
    else if(a == 3)
    {
      int z=0, o=0, r=0, mo=0;
      for(int i=0;i<a;i++)
      {
        int temp;
        cin >> temp;
        if(temp==0)
          z++;
        else if(temp==1)
          o++;
        else if(temp==-1)
          mo++;
        else
          r++;
      }

      if(mo==2 && o==1)
        cout << "yes" << endl;
      else if(z>=1 && o >= 1)
        cout << "yes" << endl;
      else if(z==0)
      {
        if(o>=2)
          cout << "yes" << endl;
        else
          cout << "no" << endl;
      }
      else if(o==0)
      {
        if(z>=2)
          cout << "yes" << endl;
        else
          cout << "no" << endl;
      }
      else
        cout << "no" << endl;
    }
    else if(a==2)
    {
      int z=0, o=0, r=0;
      for(int i=0;i<a;i++)
      {
        int temp;
        cin >> temp;
        if(temp==0)
          z++;
        else if(temp==1)
          o++;
        else
          r++;
      }

      if(z>=1)
        cout << "yes" << endl;
      else if(o>=1)
        cout << "yes" << endl;
      else
        cout << "no" << endl;
    }
    else if(a==1)
    {
      for(int i=0;i<a;i++)
      {
        int temp;
        cin >> temp;
      }

      cout << "yes" << endl;
    }
  }
}
