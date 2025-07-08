#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int partition(int a[],int l,int r)
{
    int i=l-1,pivot=a[r];
    for(int j=l;j<r;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(a[j],a[i]);
        }
    }
    i++;
    swap(a[r],a[i]);
    return i;
}

void quickSort(int a[],int l,int r)
{
    if(l<r)
    {
        int pivot = partition(a,l,r);
        quickSort(a,l,pivot-1);
        quickSort(a,pivot+1,r);
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=n-1;
    quickSort(a,0,l);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}