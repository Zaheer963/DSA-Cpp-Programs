#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,v1,x2,v2,flag=0;
    cin>>x1>>v1>>x2>>v2;
    int temp1 = x1, temp2 = x2, count1 = 0, count2 = 0;
    if(x2 > x1 && v2 > v1)
    {
        cout<<"NO";
	return 0;
    }
    do{
	temp1 += v1;
	count1++;
	temp2 += v2;
	count2++;
        if(temp1 == temp2 && count1 == count2)
        {
    	   cout<<"YES";
    	   return 0;
        }
    }while(count1 <= 10000 && count2 <= 10000);
    cout<<"NO";
}