#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s,a;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--)
    {
        a+=s[i];
    }
    if(a==s)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
