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
    bool sort=true;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                sort=false;
                break;
            }
        }
    }
    if(sort==false)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    
    return 0;
}
