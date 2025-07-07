#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <bits/stdc++.h>


void merge(int a[], int l, int m, int h)
{
    vector<int>v;
    int i=l,j=m+1;
    while(i<=m && j<=h)
    {
        if(a[i]<=a[j])
        {
            v.push_back(a[i]);
            i++;
        }
        else
        {
            v.push_back(a[j]);
            j++;
        }
    }
    while(i<=m)
    {
        v.push_back(a[i]);
        i++;
    }
    while(j<=h)
    {
        v.push_back(a[j]);
        j++;
    }
    int s = v.size();
    for(int i=0;i<s;i++)
    {
        a[i+l] = v[i];
    }
}


void mergeSort(int a[], int l, int h)
{
    if(h>l)
    {
        int mid=(l+h)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int left=0,right=n-1;
    mergeSort(a,left,right);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }    
    return 0;
}