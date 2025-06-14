#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    if(n<=5)
    {
        cout<<"None"<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            int a=0;
            for(int j=1;j<i;j++)
            {
                if(i%j==0)
                {
                    a+=j;
                }
            }
            if(a==i)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    

    return 0;
}
