#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,h;
    cin>>n>>h;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<h;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i==h-1)
            {
                cout<<a[j]<<" ";
            }
        }
        b[i]=a[i];
    }
    for(int i=0;i<h;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
