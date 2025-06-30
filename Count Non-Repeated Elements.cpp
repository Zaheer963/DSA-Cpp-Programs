#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
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
    for(auto i : mp)
    {
        if(i.second==1)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
