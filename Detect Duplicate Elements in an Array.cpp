#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n,flag=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==0)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    return 0;
}
