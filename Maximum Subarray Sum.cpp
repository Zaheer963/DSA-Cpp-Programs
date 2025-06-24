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
    int cs=0,m=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cs+=a[i];
        m=max(cs,m);
        if(cs<0)
        {
            cs=0;
        }
    }
    cout<<m;
    return 0;
}
