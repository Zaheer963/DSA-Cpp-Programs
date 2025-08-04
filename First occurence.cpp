#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    string s1,s2;
    cin>>s1>>s2;
    int j=0,l1 = s1.length(), l2 = s2.length(),flag = 0,index = INT_MAX,c=0,pos=0;
    if(l2>l1) 
    {
        cout<<-1; 
        return 0;
    }
    for(int i=0;i<l1 && j<l2; i++)
    {
        if(s1[i]==s2[j])
        {
            j++;
            index = min(index,i);
            pos = index;
            flag=1;
            c++;
        }
        else if(c>0 && pos!=index+1)
        {
            if(s1[pos]==s1[index+1])
            {
                j++;
                index++;
            }
            else
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==0 || c<l2)
    {
        cout<<-1;
    }
    else
    {
        cout<<index;
    }

    return 0;
}
