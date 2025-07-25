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

void insertEnd(Node* &head,int value)
{
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = new Node(value);
}

void removeDup(Node* &head1, Node* &head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1!=NULL)
    {
        temp2 = head2;
        bool b = false;
        while(temp2!=NULL)
        {
            if(temp1->data == temp2->data)
            {
               b = true;
            }
            temp2 = temp2->next;
        }
        if(b==false)
        {
            temp2 = head2;
            insertEnd(temp2,temp1->data);
        }
        temp1 = temp1->next;
    }
}

int main() {  
    int n,f;
    cin>>n>>f;
    Node* head1 = new Node(f);
    Node* head2 = new Node(f);
    Node* temp1 = head1;
    for(int i=1;i<n;i++)
    {
        int ele;
        cin>>ele;
        temp1->next = new Node(ele);
        temp1 = temp1->next;
    }
    removeDup(head1,head2);
    while(head2!=NULL)
    {
        cout<<head2->data<<" ";
        head2 = head2 -> next;
    }
    return 0;
}
