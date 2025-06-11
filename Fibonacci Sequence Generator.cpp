#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    int n,a=0,b=1,next;
    cin>>n;
    next=a+b;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        a=b;
        b=next;
        next=a+b;
    }
    return 0;
}
