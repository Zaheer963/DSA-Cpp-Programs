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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,index=0;
    while(i<n)
    {
        if(a[i]==0)
        {
            swap(a[i],a[index]);
            index++;
        }
        i++;
    }
    int j=0,l=n-1;
    while(j<l)
    {
        if(a[l]==2)
        {
            l--;
        }
        if(a[j]>a[l])
        {
            swap(a[j],a[l]);
            l--;
        }
        j++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}