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
    while(i<j)
    {
        if(a[i]!=0 && a[j]!=1)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
        else if(a[i]==0)
        {
            i++;
        }
        else if(a[j]==1)
        {
            j--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
