#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,dif,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_set<int>s(a,a+n);
    for(int i : s)
    {
        dif=i-1;
        if(s.find(dif)==s.end())
        {
            count=1;
            while(s.find(i+1)!=s.end())
            {
                count++;
                i++;
            }
        }
    }
    cout<<count;
    return 0;
}
