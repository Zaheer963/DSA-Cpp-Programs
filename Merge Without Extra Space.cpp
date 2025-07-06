#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int i=0,j=0,count=0;
    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        count++;
        if(count==n)
        {
            cout<<endl;
        }
    }
    while(i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while(j<m)
    {
        cout<<b[j]<<" ";
        j++;
    }
    return 0;
}
