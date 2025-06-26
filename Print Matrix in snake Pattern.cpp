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
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                cout<<v[i][j]<<" ";
            }
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<v[i][j]<<" ";
            }
        }
    }
    return 0;
}
