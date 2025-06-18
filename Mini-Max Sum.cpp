#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n=5,sum=0,sum1=0,min,max,mi,ma;
    // cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=a[0],max=a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i]){
            min=a[i];
        }
        if(max<a[i]){
            max=a[i];
        }
    }
    for(int j=0;j<n;j++)
    {
        sum1+=a[j];
    }
    mi=sum1-max;
    ma=sum1-min;
    cout<<mi<<" "<<ma;
    return 0;
}
