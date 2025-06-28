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
    int x;
    cin>>x;
    int i=0,j=c-1;
    while(i<r && j>=0)
    {
        if(v[i][j]==x)
        {
            cout<<"Yes";
            return 0;
        }
        else if(v[i][j]>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<"No";
    return 0;
}
