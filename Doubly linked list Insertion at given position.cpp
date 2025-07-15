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
    Node* prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};


void insertAtPos(Node* &head,int val,int pos)
{
    Node* k = new Node(val);
    Node* temp = head;
    int c=0;
    while(c<pos)
    {
        c++;
        temp = temp -> next;
    }
    if(temp->next!=NULL)
    {
        temp->next->prev = k;
        k->next = temp->next;
    }
    temp->next = k;
    k->prev = temp;
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
        temp->next->prev = temp;
        temp = temp->next;
    }
    int pos,val;
    cin>>pos>>val;
    insertAtPos(head,val,pos);
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head -> next;
    }
    return 0;
}
