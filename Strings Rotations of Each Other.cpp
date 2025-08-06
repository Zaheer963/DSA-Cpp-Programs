#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3,sub;
    cin>>s1>>s2;
    s3 = s1+s1;
    int l1 = s1.length(), l3 = s3.length(),c=0,i=0;
    while(i<=l3)
    {
        if(c==l1)
        {
            c=0;
            if(sub==s2)
            {
                cout<<"true";
                return 0;
            }
            sub="";
            i=(i-l1)+1;
        }
        else
        {
            sub+=s3[i];
            c++;
            i++;
        }
    }
    cout<<"false";
    

    return 0;
}