#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int a,b,count=0;
    cin>>a>>b;
    int c[a],d[b];
    for(int i=0;i<a;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<b;i++)
    {
        cin>>d[i];
    }
    unordered_set<int>s(d,d+b);
    for(int i=0;i<a;i++)
    {
        if(s.find(c[i])!=s.end())
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
