#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int a;
    cin>>a;
    int esum=0,osum=0;
    for(int i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            esum=esum+i;
        }
        else
        {
            osum+=i;
        }
    }
    cout<<osum;
    cout<<" ";
    cout<<esum;
    return 0;
}
