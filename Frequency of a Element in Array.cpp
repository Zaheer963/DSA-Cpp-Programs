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
    int t,count=0;
    cin>>t;
    for(int i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<count;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
