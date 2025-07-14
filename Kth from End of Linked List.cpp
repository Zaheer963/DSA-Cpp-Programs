#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct Node{
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int main() {  
    int n;
    cin>>n;
    int ele;
    cin>>ele;
    Node* head = new Node(ele);
    Node* temp = head;
    for(int i=1;i<n;i++)
    {
        int ele;
        cin>>ele;
        temp -> next = new Node(ele);
        temp = temp -> next;
    }
    int t;
    cin>>t;
    int ans = (n - t)+1,c=0;
    if(ans>0)
    {
        while(head!=NULL)
        {
            c++;
            if(c==ans)
            {
                cout<<head -> data;
            }
            head = head -> next;
        }
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
