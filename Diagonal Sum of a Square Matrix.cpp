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
    int ld=0,rd=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                ld+=v[i][j];
            }
            if(i+j==n-1)
            {
                rd+=v[i][j];
            }
        }
    }
    cout<<ld<<" "<<rd;
    return 0;
}
