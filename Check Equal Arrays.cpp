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
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    unordered_set<int>s(b,b+n);
    unordered_set<int>se;
    for(int i=0;i<n;i++)
    {
        if(s.find(a[i])!=s.end())
        {
            se.insert(a[i]);
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    if(se.size()!=s.size())
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    return 0;
}
