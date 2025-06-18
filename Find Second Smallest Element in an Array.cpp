#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,i;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min=a[0],flag=0,min1=INT_MAX;
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=min && a[i]<min1)
        {
            min1=a[i];
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<min1;
    }
    
    return 0;
}
