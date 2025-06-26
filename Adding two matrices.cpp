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
    int r2,c2;
    cin>>r2>>c2;
    vector<vector<int>>v2;
    for(int i=0;i<r2;i++)
    {
        vector<int>a2;
        for(int j=0;j<c2;j++)
        {
            int z2;
            cin>>z2;
            a2.push_back(z2);
        }
        v2.push_back(a2);
    }
    if(r==r2 && c==c2)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<v[i][j]+v2[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}
