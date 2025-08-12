#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int>mp;
    int n,maxi=0,count=0,smallno = INT_MAX;
    cin>>n;
    int a[n],number=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto x : mp)
    {
        if(maxi < x.second)
        {
            maxi = x.second;
            number = x.first;
            count++;
        }
        if(count>1)
        {
            if(x.second == maxi)
            {
                smallno = min(x.second,smallno);
                number = x.first;
            }
        }
    }
    cout<<number;
    
}