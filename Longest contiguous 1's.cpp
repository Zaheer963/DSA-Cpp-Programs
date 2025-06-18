#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,count=0,m=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
          count++;
          if(m<count)
          {
              m=count;
          }
        }
        else
        {
            count=0;
        }
    }
    cout<<m;

    return 0;
}
