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


void dup(Node* &head)
{
    Node* cur = head;
    while(cur!=NULL && cur->next!=NULL)
    {
        if(cur->data == cur->next->data)
        {
            Node* temp = cur->next;
            cur->next = cur->next->next;
            delete(temp);
        }
        else
        {
            cur = cur -> next;
        }
    }
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
    dup(head);
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    return 0;
}
