#include <iostream>
#include <set>

using namespace std;

int main()
{
    long long t,n,a[100007],i,sum,j;
    set <long long> s;
    cin >> t;
    while(t--)
    {
        s.clear();
        cin >> n;
        bool visited[100007]={false};
        sum=0;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            a[i]=(a[i]+1+i)%n;
        }
        for(i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                j=i;
                while(true)
                {
                    visited[j]=true;
                    j=a[j];
                    if(visited[j]==true)
                    {
                        s.insert(j);
                        break;
                    }
                }
            }
        }
        set<long long>::iterator it;
        for(i=0;i<n;i++)
        {
            visited[i]=false;
        }
        for(it=s.begin();it!=s.end();it++)
        {
            j=*it;
            while(true)
            {
                visited[j]=true;
                sum++;
                j=a[j];
                if(visited[j]==true)
                {
                    break;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}