#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    int a,d,count=0;
    cin>>a>>d;
    for(int i=1;i<=a;i++)
    {
        if(i%d==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
