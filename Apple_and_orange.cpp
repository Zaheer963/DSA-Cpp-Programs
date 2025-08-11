#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    int apples[m],oranges[n];
    for(int i=0;i<m;i++)
    {
        cin>>apples[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>oranges[i];
    }
    int applesCount=0,orangesCount=0;
    for(int i=0;i<m;i++)
    {
        int onHouse = a + apples[i];
        if(onHouse>=s && onHouse<=t)
        {
            applesCount++;
        }
    }
    for(int i=0;i<n;i++)
    {
        int onHouse = b + oranges[i];
        if(onHouse>=s && onHouse<=t)
        {
            orangesCount++;
        }
    }   
    cout<<applesCount<<endl<<orangesCount;
}