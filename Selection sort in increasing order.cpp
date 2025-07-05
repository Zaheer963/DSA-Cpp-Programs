#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int index=0;
    for(int i=0;i<n;i++)
    {   
        int ma=a[i];
        for(int j=i+1;j<n;j++)
        {
            ma=max(a[j],ma);
            if(ma==a[j])
            {
                index = j;
            }
        }
        if(ma==a[i])
        {
            index = i;
        }
        swap(a[i],a[index]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}