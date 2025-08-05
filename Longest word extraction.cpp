#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    string s,finalStr;
    int l=0;
    while(cin>>s)
    {
        int le = s.length();
        if(le>l)
        {
            l = le;
            finalStr = s;
        }
    }
    cout<<finalStr;
    return 0;
}
