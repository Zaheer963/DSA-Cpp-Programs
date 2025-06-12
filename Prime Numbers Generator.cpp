#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main() { 
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
