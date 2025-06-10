#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int x;
    cin>>x;
    int a[x],count1=0,count2=0;
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<x;i++)
    {
        if(a[i]>0)
        {
            count1++;
        }
        else if(a[i]<0)
        {
            count2++;
        }
    }
    cout<<count1<<" "<<count2;
    return 0;
}
