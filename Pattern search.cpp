#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s,p;
    cin>>s>>p;
    if(s.find(p) != s.find(" ")) cout<<"Yes";
    else cout<<"No";
    return 0;
}
