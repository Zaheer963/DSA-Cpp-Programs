#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int n;
    cin>>n;
    int fact=1;
    for(int i=n;i>0;i--)
    {
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}
