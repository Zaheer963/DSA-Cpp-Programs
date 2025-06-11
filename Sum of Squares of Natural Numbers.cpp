#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int a;
    cin>>a;
    int sq[a],temp=0;
    for(int i=1;i<=a;i++)
    {
        sq[a]=i*i;
        temp+=sq[a];
    }
    cout<<temp;
    return 0;
}
