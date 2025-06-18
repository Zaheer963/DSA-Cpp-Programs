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
    for(int i=a[0];i<a[0]+n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==a[j])
            {
                cout<<i<<" ";
                break;
            }
        }
    }
    return 0;
}
