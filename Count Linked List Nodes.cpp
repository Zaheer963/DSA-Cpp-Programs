#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        Node* next = NULL;
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
    int c=1;
    for(int i=1;i<n;i++)
    {
        c++;
        int e;
        cin>>e;
        temp->next = new Node(e);
        temp = temp->next;
    }
    cout<<c;
    return 0;
}