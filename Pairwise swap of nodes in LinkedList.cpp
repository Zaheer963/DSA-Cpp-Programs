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

void pairSwap(Node* &head,int n)
{
    Node* cur = head;
    head = cur -> next;
    Node* temp = cur -> next;
    Node* curNext;
    if(n%2==0)
    {
        while(cur->next != NULL && temp->next != NULL)
        {
            temp = cur -> next;
            cur -> next = temp -> next -> next;
            curNext = temp -> next;
            temp -> next = cur;
            cur = curNext;
            temp = cur -> next;
        }
        temp -> next = cur;
        cur -> next = NULL;
    }
    else
    {
        while(cur->next != NULL && temp->next->next != NULL)
        {
            temp = cur -> next;
            cur -> next = temp -> next ->next;
            curNext = temp -> next;
            temp -> next = cur;
            cur = curNext;
            temp = cur -> next;
        }
        Node* last = temp -> next;
        temp -> next = cur;
        cur -> next = last;
        last -> next = NULL;
    }
}

void traverse(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head -> next;
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
        temp = temp -> next;
    }
    if(n==1)
    {
        traverse(head);
        return 0;
    }
    pairSwap(head,n);
    traverse(head);
}
