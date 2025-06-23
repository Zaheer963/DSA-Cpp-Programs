#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    string s;
    cin>>s;
    int l=s.length();
    int vowels=0,digits=0,consonants=0;
    for(int i=0;i<l;i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            vowels++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            digits++;
        }
        else
        {
            consonants++;
        }
    }
    cout<<vowels<<" "<<consonants<<" "<<digits<<" ";
    return 0;
}
