#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int n,flag=0;
    cin>>n;
    int a[n];
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]]>1)
        {
            flag=1;
            cout<<i+1;
            return 0;
        }
    }
    if(flag==0)
    {
        cout<<-1;
    }
    return 0;
}
