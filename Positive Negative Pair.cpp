#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==0)
            {
                cout<<-abs(a[i])<<" "<<abs(a[i])<<endl;
                count++;
            }
        }
        if(count==0)
        {
            cout<<0;
            break;
        }
    }
    return 0;
}
