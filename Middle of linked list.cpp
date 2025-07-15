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


int main()
{
    int n;
    cin>>n;
    int e;
    cin>>e;
    Node* head = new Node(e);
    Node* temp = head;
    for(int i=1;i<n;i++)
    {
        int e;
        cin>>e;
        temp->next = new Node(e);
        temp = temp->next;
    }
    int z=n/2,c=-1;
    while(head!=NULL){
        c++;
        if(c==z){
            cout<<head->data;
        }
        head = head -> next;
    }
    return 0;
}