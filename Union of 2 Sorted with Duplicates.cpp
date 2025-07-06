#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(j>0 && b[j]==b[j-1])
        {
            j++;
            continue;
        }
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        cout<<a[i]<<" ";
        i++;
    }
    while(j<m)
    {
        if(j>0 && b[j]==b[j-1])
        {
            j++;
            continue;
        }
        cout<<b[j]<<" ";
        j++;
    }
    return 0;
}
