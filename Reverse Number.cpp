#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n,temp,rev;
    cin>>n;
    while(n!=0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    cout<<rev;
    return 0;
}
