#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,r;
    string s;
    cin>>l>>s>>r;
    r = r % 26;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            int p = s[i] + r;
            if(p > 122) p -= 26;
            cout<<char(p);
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            int p = s[i] + r;
            if(p > 90) p -= 26;
            cout<<char(p);
        }
        else cout<<s[i];
    }
    return 0;
}