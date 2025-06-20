#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    int i=0,j=1,count=0,l=s.length();
    while(j<l)
    {
        if(s[i]==s[j])
        {
            i++;
            count++;
        }
        j++;
    }
    cout<<count;
    return 0;
}
