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
    for(int j=0;j<c;j++)
    {
        cout<<v[0][j]<<" ";
    }
    for(int j=1;j<r;j++)
    {
        cout<<v[j][c-1]<<" ";
    }
    for(int j=c-2;j>=0;j--)
    {
        cout<<v[r-1][j]<<" ";
    }
    for(int j=r-2;j>0;j--)
    {
        cout<<v[j][0]<<" ";
    }
    return 0;
}
