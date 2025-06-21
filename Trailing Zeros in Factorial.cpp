#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n,t=0;
    cin>>n;
    for(int i=5;i<=n;i=i*5)
    {
        t=t+(n/i);
    }
    cout<<t;
    return 0;
}
