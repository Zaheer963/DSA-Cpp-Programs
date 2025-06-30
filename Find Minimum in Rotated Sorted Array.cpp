#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,j=n-1;
    while(i<=j)
    {
        int m=(i+j)/2;
        if(a[m]>a[j])
        {
            if(a[m]>a[m+1] && a[m+1]!=n-1)
            {
                i=m+1;
            }
            else
            {
                i=i+1;
            }
        }
        else if(a[m]<a[j])
        {
            if(a[m]>a[m-1] && a[m-1]!=0)
            {
                j=m-1;
            }
            else
            {
                j=j-1;
            }
        }
        else
        {
            cout<<a[m];
            break;
        }
    }
    return 0;
}
