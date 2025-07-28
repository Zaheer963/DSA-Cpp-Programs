#include <bits/stdc++.h>
using namespace std;

int remainingList1 = 0, remainingList2 = 0;
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
void insertEnd(Node* &head3,int value,int count)
{
    Node* temp;
    
    if(count==1)
    {
        head3 = new Node(value);
        temp = head3;
    }
    temp = head3;
    if(count>1)
    {

        while(temp -> next!=NULL)
        {
            temp = temp->next;
        }
        temp -> next = new Node(value);
    }
}
void sortTwoList(Node* &head1, Node* &head2, Node* &head3)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    int firstNodeCount=0;
    while(temp1 != NULL && temp2 != NULL)
    {
        if((temp1 -> data) <= (temp2 -> data))
        {
            firstNodeCount++;
            insertEnd(head3,temp1->data,firstNodeCount);
            temp1 = temp1 -> next;
            remainingList1++;
        }
        else
        {
            firstNodeCount++;
            insertEnd(head3,temp2->data,firstNodeCount);
            temp2 = temp2 -> next;
            remainingList2++;
        }
    }
}

void fromRemainingList1(Node* &head,int count,Node* &head3)
{
    Node* temp = head;
    int c=1;
    while(temp!=NULL)
    {
        c++;
        if(c>count+1)
        {
            insertEnd(head3,temp->data,c);
        }
        temp = temp -> next;
    }
}

void fromRemainingList2(Node* &head,int count,Node* &head3)
{
    Node* temp = head;
    int c=1;
    while(temp!=NULL)
    {
        c++;
        if(c>count+1)
        {
            insertEnd(head3,temp->data,c);
        }
        temp = temp -> next;
    }
}

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

void traverse(Node* &head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main() {
    int n1,f1;
    cin>>n1>>f1;
    Node* head1 = new Node(f1);
    Node* temp1 = head1;
    for(int i=1; i<n1; i++)
    {
        int ele1;
        cin>>ele1;
        temp1->next = new Node(ele1);
        temp1 = temp1->next;
    }

    int n2,f2;
    cin>>n2>>f2;
    Node* head2 = new Node(f2);
    Node* temp2 = head2;
    for(int i=1; i<n2; i++)
    {
        int ele2;
        cin>>ele2;
        temp2->next = new Node(ele2);
        temp2 = temp2->next;
    }
    Node* head3;
    sortTwoList(head1,head2,head3);
    if(remainingList1<n1)
    {
        fromRemainingList1(head1,remainingList1,head3);
    }
    else if(remainingList2<n2)
    {
        fromRemainingList2(head2,remainingList2,head3);
    }
    dup(head3);
    traverse(head3);
    return 0;
}