#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int row,col;
    cin>>row>>col;
    vector<vector<int>>v;
    for(int i=0;i<row;i++)
    {
        vector<int>a;
        for(int j=0;j<col;j++)
        {
            int z;
            cin>>z;
            a.push_back(z);
        }
        v.push_back(a);
    }
    int l=0,t=0,r=col-1,b=row-1;
    while(t<=b && l<=r)
    {
        for(int i=l;i<=r;i++)
        {
            cout<<v[t][i]<<" ";
        }
        t++;
        for(int i=t;i<=b;i++)
        {
            cout<<v[i][r]<<" ";
        }
        r--;

        if(t<=b)
        {
            for(int i=r;i>=l;i--)
            {
                cout<<v[b][i]<<" ";
            }
        }

        b--;
        
        if(l<=r)
        {
            for(int i=b;i>=t;i--)
            {
                cout<<v[i][l]<<" ";
            }
        }
        l++;

    }
    
    
    return 0;
}
