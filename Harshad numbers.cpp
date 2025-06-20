#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,r,s=0;
    cin>>n;
    int org=n;
    while(n!=0)
    {
        r=n%10;
        s+=r;
        n=n/10;
    }
    n=org;
    if(n%s==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
