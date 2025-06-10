#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin>>a;
    if(a%2==0 && a%3==0)
    {
        cout<<"Yes";
    }
    else if(a%2!=0 || a%3!=0)
    {
        cout<<"No";
    }
    return 0;
}
