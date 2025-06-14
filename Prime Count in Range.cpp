#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int l,r,count=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        int c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
