#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {  
    int a,b;
    cin>>a>>b;
    unordered_set<int>s;
    for(int i=0;i<a+b;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size();
    return 0;
}
