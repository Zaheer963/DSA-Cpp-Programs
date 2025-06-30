#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
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
        if(mp[a[i]]==1)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
