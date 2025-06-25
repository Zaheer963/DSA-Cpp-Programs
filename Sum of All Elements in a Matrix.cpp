#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int r,c;
    cin>>r>>c;
    vector<vector<int>>v;
    for(int i=0;i<r;i++)
    {
        vector<int>a;
        for(int j=0;j<c;j++)
        {
            int z;
            cin>>z;
            a.push_back(z);
        }
        v.push_back(a);
    }
    int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum+=v[i][j];
        }
    }
    cout<<sum;
    return 0;
}
