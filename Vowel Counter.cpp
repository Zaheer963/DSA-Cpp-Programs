#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    string s;
    getline(cin,s);
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
