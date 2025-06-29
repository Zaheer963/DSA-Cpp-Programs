#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int one(int a[],int n)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(a[mid]==1)
        {
            i=mid+1;
        }else{
            j=mid-1;    
        }
    }
    return i;
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
    cout<<one(a,n);
    return 0;
}
