#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    int n;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = ",n,i);
        cout<<n*i<<endl;
    }
    return 0;
}
