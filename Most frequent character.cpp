#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() { 
    string s;
    cin>>s;
    char mc=' ';
    int m=0,count=0,sl=s.length();
    unordered_map<char,int>mp;
    for(int i=0;i<sl;i++)
    {
        mp[s[i]]++;
        m = max(m,mp[s[i]]);
    }
    for(auto x : mp)
    {
        if(x.second==m)
        {
            count++;
            mc = x.first;
        }
    }
    for(auto i : mp)
    {
        if(count>1 && i.second==m)
        {
            if(i.first<mc)
            {
                mc = i.first;
            }
        }
        else if(i.second==m)
        {
            break;
        }
    }
    cout<<mc;
    return 0;
}
