#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int a;
    cin>>a;
    int nsum;
    for(int i=1;i<=a;i++)
    {
        nsum+=i;
    }
    cout<<nsum;
    return 0;
}
