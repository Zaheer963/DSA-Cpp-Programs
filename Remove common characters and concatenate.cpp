#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1,s2;
    cin>>s1>>s2;
    int l1 = s1.length(), l2 = s2.length(), f = 0;
    for(int i=0; i<l1; i++)
    {
        if(s2.find(s1[i]) == s2.find(" "))
        {
            cout<<s1[i];
            f++;
        }
    }
    for(int i=0; i<l2; i++)
    {
        if(s1.find(s2[i]) == s1.find(" "))
        {
            cout<<s2[i];
            f++;
        }
    }
    if(f == 0) cout<<-1;
    return 0;
}
