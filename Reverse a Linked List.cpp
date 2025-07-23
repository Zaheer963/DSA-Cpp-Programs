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

void reverseList(Node* &head)
{
    Node* cur = head;
    Node* prev = NULL;
    while(cur!=NULL)
    {
        Node* after = cur->next;
        cur->next = prev;
        prev = cur;
        cur = after;
    }
    head = prev;
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
    reverseList(head);
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head -> next;
    }
    return 0;
}
