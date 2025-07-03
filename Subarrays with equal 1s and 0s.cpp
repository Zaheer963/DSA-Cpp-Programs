#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() { 
    int n,count0=0,count1=0,tcount=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
        if(count0==count1)
        {
            tcount++;
        }
        if(i==n-1)
        {
            i=k++;
            count0=0,count1=0;
        }
    }
    cout<<tcount;
    return 0;
}
