#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=INT_MIN,count=0;
    cin>>n;
    string a[n],s;
    unordered_map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        m=max(m,mp[a[i]]);
    }
    for(auto i : mp)
    {
        if(i.second==m)
        {
            s = i.first;
            count++;
        }
    }
    for(auto i : mp)
    {
        if(count>1 && i.second==m)
        {
            if(s>i.first)
            {
                s=i.first;
            }
        }
    }
    cout<<s<<" "<<m;
    

    return 0;
}