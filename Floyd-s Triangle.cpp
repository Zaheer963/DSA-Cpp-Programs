#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i+1;j++)
        {
            cout<<a<<" ";
            a++;
            
        }
        cout<<endl;
    }
    return 0;
}
