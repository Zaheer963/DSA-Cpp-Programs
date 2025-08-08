#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    string st = s + 'a';
    int l = st.length(), sum = 0;
    string n = "";
    for(int i=0; i<l; i++)
    {
        if(st[i] >= '0' && st[i] <= '9')
            n += st[i];
        else
        {
            if(n == "") continue;
            int num = stoi(n);
            sum += num;
            n = "";
        }
    }
    cout<<sum;
    return 0;
}
