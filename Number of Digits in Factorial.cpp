#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int n,count=0;
    cin>>n;
    long long fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    while(fact!=0)
    {
        fact=fact/10;
        count++;
      
    }
    cout<<count;
    return 0;
}
