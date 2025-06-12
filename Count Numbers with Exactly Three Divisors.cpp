#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countDivisor(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    return count;
}

int main() {
    int a,count1=0;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int count2=countDivisor(i);
        if(count2==3)
        {
            count1++;
        }
    }
    cout<<count1;
    return 0;
}
