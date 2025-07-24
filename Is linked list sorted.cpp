#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};


bool ascending(Node* &head)
{
    Node* small = head;
    while(small->next!=NULL)
    {
        if((small->data)>=(small->next->data))
        {
            return false;
        }
        small = small->next;
    }
    return true;
}

int main() {
    int n,f;
    cin>>n>>f;
    Node* head = new Node(f);
    Node* temp = head;
    for(int i=1;i<n;i++)
    {
        int ele;
        cin>>ele;
        temp->next = new Node(ele);
        temp = temp->next;
    }
    if(ascending(head))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
