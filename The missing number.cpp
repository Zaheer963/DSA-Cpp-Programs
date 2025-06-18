#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n=100;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==i)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<i;
            break;
        }
    }
    
    return 0;
}
