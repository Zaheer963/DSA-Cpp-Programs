#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {  
    unordered_map<int,int>mp;
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n+2;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n+2;i++)
    {
        mp[a[i]]++;
        if(mp[a[i]]==2)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
