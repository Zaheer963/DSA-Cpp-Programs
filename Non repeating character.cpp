#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    string s;
    cin>>s;
    int l = s.length();
    for(int i=0;i<l;i++)
    {
        mp[s[i]]++;
    }
    for(auto x : mp)
    {
        if(x.second==1)
        {
            cout<<x.first;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}