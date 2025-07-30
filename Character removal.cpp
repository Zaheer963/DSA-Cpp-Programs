#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    char c;
    cin>>c;
    int l = s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]==c) continue;
        cout<<s[i];
    }
    return 0;
}
