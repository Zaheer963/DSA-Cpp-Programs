#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0;
    while(true)
    {
      if(i==n)
      {
          cout<<-1;
          return 0;
      }
       if(a[i]==k)
       {
           cout<<i<<endl;
           return 0;
       }
       i++;
    }
    return 0;
}
