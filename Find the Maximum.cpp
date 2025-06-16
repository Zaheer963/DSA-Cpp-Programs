#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s=a[0];
    
    for(int i=1;i<n;i++)
    {
        if(s<a[i])
        {
            s=a[i];
        } 
    }
    cout<<s;
    return 0;
}
