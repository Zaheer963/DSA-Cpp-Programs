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

bool identical(Node* &head, Node* &head1)
{
    Node* list1 = head;
    Node* list2 = head1;
    while(list1 != NULL && list2 != NULL)
    {
        if(list1 -> data != list2 -> data)
        {
            return false;
        }
        list1 = list1 -> next;
        list2 = list2 -> next;
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
        temp -> next = new Node(ele);
        temp = temp->next;
    }
    int n1,f1;
    cin>>n1>>f1;
    Node* head1 = new Node(f1);
    Node* temp1 = head1;
    for(int i=1;i<n1;i++)
    {
        int ele;
        cin>>ele;
        temp1 -> next = new Node(ele);
        temp1 = temp1->next;
    }
    if(n!=n1)
    {
        cout<<"false";
        return 0;
    }
    if(identical(head,head1))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}