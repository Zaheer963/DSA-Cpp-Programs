#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cl=a[n-1];
    for(int i=n-1;i>=0;i--)
    {
        if(cl<a[i])
        {
            cl=a[i];
            cout<<cl<<" ";
        }
    }
    cl=a[n-1];
    cout<<cl;
    return 0;
}
