#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int sqr(int n)
{
    int i=1,c=0;
    while(i<=n)
    {
        int a=i*i;
        if(a<n)
        {
            c=i;
        }
        else if(a==n)
        {
            return i;
        }
        i++;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<sqr(n);
    return 0;
}