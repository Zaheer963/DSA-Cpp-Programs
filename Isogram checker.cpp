#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<char,int>mp;
    string s;
    cin>>s;
    int l1 = s.length();
    for(int i=0;i<l1;i++)
    {
        mp[s[i]]++;
    }
    for(auto x : mp)
    {
        if(x.second>1)
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}