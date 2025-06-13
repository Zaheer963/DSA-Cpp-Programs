#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n,t,rev;
    cin>>n;
    int org=n;
    while(n!=0)
    {
        t=n%10;
        rev=rev*10+t;
        n=n/10;
    }
    if(rev==org)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
