#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        int temp = a[i],count=0,s=0,num=a[i];
        while(temp!=0)
        {
            s = temp%10;
            if(s==0)
            {
                temp /= 10;
                continue;
            }
            if(num%s==0)
            {
                count++;
            }
            temp /= 10;
        }
        cout<<count<<endl;
    }
    return 0;
}