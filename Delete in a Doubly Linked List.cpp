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

void deleteAtPosition(Node* &head, int pos,int n)
{
    Node* temp = head;
    int c=0;
    if(pos==0)
    {
        Node* denode = temp;
        head = temp->next;
        if(denode->next!=NULL)
        {
            head->prev = NULL;
        }
        delete(denode);
        return;
    }
    while(c<pos-1 && temp->next->next!=NULL)
    {
        c++;
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    if(deleteNode->next!=NULL)
    {
        deleteNode->next->prev = temp;    
    }
    delete(deleteNode);
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
    int pos;
    cin>>pos;
    deleteAtPosition(head,pos,n);
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head -> next;
    }
    return 0;
}
