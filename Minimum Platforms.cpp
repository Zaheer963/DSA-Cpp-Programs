#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std; 
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int z=INT_MIN;
    int i=0,j=0,c=1,k=1;
    while(i<n && j<n){
        if(a[i]<b[k] && b[j]>a[k]){
            c++;
            k++;
        }
        else{
            z=max(z,c);
            k=i+1;
            c=0;
            i++;
            j++;
        }
    }
    cout<<z;
    return 0;
}