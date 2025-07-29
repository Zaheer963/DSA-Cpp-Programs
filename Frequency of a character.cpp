#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    char ch;
    cin>>ch;
    int l = s.length(),c=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]==ch)
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
