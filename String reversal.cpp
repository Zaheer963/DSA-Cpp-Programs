#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    string s;
    cin>>s;
    int l = s.length()-1;
    for(int i=l;i>=0;i--)
    {
        cout<<s[i];
    }
    return 0;
}
