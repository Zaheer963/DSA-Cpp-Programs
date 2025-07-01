#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int>s;
    int n,t,flag=0;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int sum=t-a[i];
        if(s.find(sum)!=s.end())
        {
            flag=1;
        }
        else
        {
            s.insert(a[i]);
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}