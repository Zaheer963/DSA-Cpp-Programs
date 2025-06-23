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
    int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN,flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
    
    for(int i=0;i<n;i++)
    {
        max1=max(a[i],max1);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=max1)
        {
            max2=max(a[i],max2);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=max1 && a[i]!=max2)
        {
            max3=max(a[i],max3);
            flag=2;
        }
    }
    if(flag==1)
    {
        cout<<max1<<" ";
        break;
    }
    else if(flag==0)
    {
        cout<<max1<<" "<<max2<<" ";
        break;
    }
    else if(flag==2)
    {
        cout<<max1<<" "<<max2<<" "<<max3<<" ";
        break;
    }
    }
    return 0;
}
