#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    string s,a;
    cin>>s;
    int l=s.length();
    char c=s[0];
    int count=1;
    for(int i=1;i<l;i++)
    {
        if(s[i]==c)
        {
            count++;
        }
        else
        {
            a=a+c;
            a=a+to_string(count);
            c=s[i];
            count=1;
        }
        // cout<<a;
    }
    a=a+c;
    a=a+to_string(count);
    cout<<a<<endl;
    return 0;
}
