#include <iostream>
#include <bits/stdc++.h>
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

void reverse(Node* &head)
{
    Node* cur = head;
    Node* prev = NULL;
    while(cur!=NULL)
    {
        Node* nex = cur -> next;
        cur -> next = prev;
        prev = cur;
        cur = nex;
    }
    head = prev;
}

bool palindrome(Node* &head,Node* rhead)
{
    Node* start = head;
    Node* end = rhead;
    while(start!=NULL && end!=NULL)
    {
        if(start->data!=end->data)
        {
            return false;
        }
        start = start -> next;
        end = end->next;
    }
    return true;
}
int main()
{
    int n,f;
    cin>>n>>f;
    Node* head = new Node(f);
    Node* rhead = new Node(f);
    Node* temp = head;
    Node* rtemp = rhead;
    for(int i=1;i<n;i++)
    {
        int ele;
        cin>>ele;
        temp->next = new Node(ele);
        rtemp->next = new Node(ele);
        temp = temp->next;
        rtemp = rtemp->next;
    }
    reverse(rhead);
    if(palindrome(head,rhead))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}