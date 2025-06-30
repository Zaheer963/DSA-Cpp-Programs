#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,n1;
    cin>>n;
    vector<int>v;
    int a[n];
    cin>>n1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    int b[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>b[i];
        v.push_back(b[i]);
    }
    sort(v.begin(),v.end());
    int l=v.size();
    if(l%2==1)
    {
        cout<<v[l/2];
    }
    else
    {
        int t=(v[l/2]+v[(l/2)-1])/2;
        cout<<t;
    }
    return 0;
}
