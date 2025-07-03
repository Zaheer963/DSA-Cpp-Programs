#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() { 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    unordered_map<int,int>mp;
    for(int i=0;i<k;i++)
    {
        mp[a[i]]++;
    }
    cout<<mp.size()<<" ";
    for(int i=0;i<n-k;i++)
    {
        mp[a[i]]--;
        if(mp[a[i]]==0)
        {
            mp.erase(a[i]);
        }
        mp[a[i+k]]++;
        cout<<mp.size()<<" ";
    }
    return 0;
}
