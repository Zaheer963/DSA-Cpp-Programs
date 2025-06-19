#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,j,k,n,t,flag=0;
    cin>>n>>t;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==t){
                    flag=1;
                }
            }
        }
    }
    if(flag==1){
                    cout<<"YES";
    }
    else{
        
        cout<<"NO";
    }
    return 0;
}
