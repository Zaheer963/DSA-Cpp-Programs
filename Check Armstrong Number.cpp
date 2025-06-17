#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,b=0,d,c,sum=0;
     cin>>n;
     int org=n;
     while(n!=0)
     {
        //  d=n%10;
         n=n/10;
         c++;
         
     }
     n=org;
     while(n!=0)
     {
         d=n%10;
         sum+=pow(d,c);
         n=n/10;
     }
     if(sum==org)
     {
         cout<<"YES";
     }
     else
     {
         cout<<"NO";
     }
    return 0;
}
