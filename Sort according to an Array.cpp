#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n,m,maxi=INT_MIN;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                cout<<a[j]<<" ";
                a[j] = maxi+1;
            }
        }
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=maxi+1)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
