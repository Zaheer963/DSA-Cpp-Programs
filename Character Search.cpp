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
    int flag=0,l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]==c)
        {
            cout<<i;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<-1;
    }
    return 0;
}
