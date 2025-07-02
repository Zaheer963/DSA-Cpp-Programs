#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {  
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    unordered_set<int>s;
    s.insert(0);
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(s.find(sum)!=s.end())
        {
            cout<<"true";
            return 0;
        }
        else
        {
            s.insert(a[i]);
        }
    }
    cout<<"false";
    return 0;
}
