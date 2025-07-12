#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {  
    int n,k;
    cin>>n>>k;
    int a[n];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int res = abs(a[i]-k);
        v.push_back({res,a[i]});
    }
    sort(v.begin(),v.end());
    int l = v.size();
    for(int i=0;i<l;i++)
    {
        cout<<v[i].second<<" ";
    }
    return 0;
}
