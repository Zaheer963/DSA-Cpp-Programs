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
    sort(a,a+n);
    int mi = INT_MAX;
    for(int i=0;i<n;i++)
    {
        int ans =0;
        ans = abs(a[i]-a[i+1]);
        mi = min(mi,ans);
    }
    cout<<mi;
    
    return 0;
}
