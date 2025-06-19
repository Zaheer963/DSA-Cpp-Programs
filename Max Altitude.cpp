#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n,al=0,k=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        al=al+a[i];
        if(al>k)
        {
            k=al;
        }
    }
    cout<<k;
    return 0;
}
