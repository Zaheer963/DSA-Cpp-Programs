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
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            cout<<a[i]<<" ";
        }
        else
        {
            cout<<a[i+1]<<" ";
        }
    }
    return 0;
}
