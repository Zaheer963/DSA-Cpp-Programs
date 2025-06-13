#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int n,d,sum=0;
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    cout<<sum;
    return 0;
}
