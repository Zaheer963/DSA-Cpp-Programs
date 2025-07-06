#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n,m,p,h;
    cin>>n>>m>>p;
    int a[n],b[m],c[p];
    h = n+m+p;
    int d[h],l=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        d[l] = a[i];
        l++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        d[l] = b[i];
        l++;
    }
    for(int i=0;i<p;i++)
    {
        cin>>c[i];
        d[l]=c[i];
        l++;
    }
    sort(d,d+h);
    for(int i=0;i<h;i++)
    {
        cout<<d[i]<<" ";
    }
    return 0;
}
