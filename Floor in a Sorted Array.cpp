#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int floor(int a[],int n,int k)
{
    int i=0,j=n-1,l=-1,r=-1;
    while(i<=j)
    {
        int m=(i+j)/2;
        if(a[m]==k)
        {
            return m;
        }
        if(a[m]>k)
        {
            j=m-1;
            l=m;
        }
        else
        {
            i=m+1;
            r=m;
        }
    }
    if(l<r)
    {
        return l;
    }
    else
    {
        return r;
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
    int k;
    cin>>k;
    cout<<floor(a,n,k);
    return 0;
}