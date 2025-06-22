#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n,count=0,count1=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b,c;
    cin>>b>>c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b)
            {
                count++;
            }
            else if(a[i]==c)
            {
                count1++;
            }
        }
    }
    if(count>count1)
        {
            cout<<b;
        }
        else if(count1>count)
        {
            cout<<c;
        }
        else if(count==count1)
        {
            cout<<min(b,c);
        }
    return 0;
}
