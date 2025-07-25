#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* random;
    Node(int x) {
        data=x;
        next=NULL;
        random = NULL;
    }
};

void add(Node* &head1,Node* &head2){
    Node* temp1 = head1;
    while(temp1->next!=NULL){
        temp1 = temp1->next;
    }
    temp1->next = head2;
}
void delNodeAtTheStart(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}
void traverse(Node* head) {
    while(head!=NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main() {
    int n,k;
    cin>>n;
    k=1;
    Node* even=new Node(k);
    Node* tempeven=even;
    Node* odd=new Node(k);
    Node* tempodd=odd;  
    for(int i=0;i<n;i++) 
    {
        cin>>k;
        if(k%2==0)
        {
           tempeven->next=new Node(k);
           tempeven=tempeven->next;
        }
       else
       {
           tempodd->next=new Node(k);
           tempodd=tempodd->next;
       }
    }
    delNodeAtTheStart(even);
    delNodeAtTheStart(odd);
    if(even==NULL)
    {
        traverse(odd);
    }
    else if(odd==NULL)
    {
        traverse(even);
    }
    else
    {
       add(even,odd);
       traverse(even);
    }
    return 0;
}