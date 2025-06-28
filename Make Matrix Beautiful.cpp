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
    // vector<vector<int>>rc;
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
    int max1=0,max2=0,matrix=0,rop=0,cop=0;
    vector<int>rs;
    vector<int>cs;
    for(int i=0;i<n;i++)
    {
        int rsum=0,csum=0;
        for(int j=0;j<n;j++)
        {
            rsum+=v[i][j];
            csum+=v[j][i];
        }
        rs.push_back(rsum);
        cs.push_back(csum);
        max1=max(rsum,max1);
        max2=max(csum,max2);
        matrix=max(max1,max2);
    }
    if(matrix==max1)
    {
        for(int i=0;i<n;i++)
        {
            if(rs[i]!=max1)
            {
                while(rs[i]!=max1)
                {
                    rs[i]++;  
                    rop++;
                }
            }
        }
        cout<<rop;
    }
    else if(matrix==max2)
    {
        for(int i=0;i<n;i++)
        {
            if(cs[i]!=max2)
            {
                while(cs[i]!=max2)
                {
                    cs[i]++;
                    cop++;
                }
            }
        }
        cout<<cop;
    }
    return 0;
}
