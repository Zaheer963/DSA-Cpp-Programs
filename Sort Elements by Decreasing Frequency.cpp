#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <bits/stdc++.h>

unordered_map<int,int>mp;
vector<pair<int,int>>v;

bool compare(pair<int,int>a,pair<int,int>b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second>b.second;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto i : mp)
    {
        v.push_back({i.first,i.second});
    }
    sort(v.begin(),v.end(),compare);
    for(auto i : v)
    {
        while(i.second>0)
        {
            cout<<i.first<<" ";
            i.second--;
        }
    }
    return 0;
}
