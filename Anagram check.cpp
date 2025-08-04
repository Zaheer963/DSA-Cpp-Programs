#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    unordered_map<char,int>mp1;
    unordered_map<char,int>mp2;
    string s1,s2;
    cin>>s1>>s2;
    int l1 = s1.length(),l2 = s2.length();
    for(int i=0;i<l1;i++)
    {
        mp1[s1[i]]++;
    }
    for(int i=0;i<l2;i++)
    {
        mp2[s2[i]]++;
    }
    if(mp1==mp2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
