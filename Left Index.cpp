#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int left(int a[],int n,int x)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(a[mid]<x)
        {
            i=mid+1;
        }
        else if(a[mid]>x)
        {
            j=mid-1;
        }
        else
        {
            if(mid==0 || (a[mid]!=a[mid-1]))
            {
                return mid;
            }
            else
            {
                j=mid-1;
            }
        }
    }
    return -1;

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
    int t;
    cin>>t;
    cout<<left(a,n,t);
    return 0;
}