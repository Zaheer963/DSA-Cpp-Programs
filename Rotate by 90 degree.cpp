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
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
