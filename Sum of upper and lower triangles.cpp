#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        vector<int>a;
        for(int j=0;j<n;j++)
        {
            int z;
            cin>>z;
            a.push_back(z);
        }
        v.push_back(a);
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            sum1+=v[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            sum2+=v[i][j];
        }
    }
    
    cout<<sum2<<" "<<sum1;
    return 0;
}
