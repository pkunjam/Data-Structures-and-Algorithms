// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}


bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */

Node* Reverse(Node* slow){
    
    if(slow->next==NULL)
    {
        return slow;
    }
    
    Node* p = Reverse(slow->next);
    Node* q = slow->next;
    q->next = slow;
    slow->next = NULL;
    
    return p;
}

bool isPalindrome(Node *head)
{
    
    Node* slow = head;
    Node* fast = head;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    fast = head;
    slow = Reverse(slow);
    
    while(slow!=NULL)
    {
        if(fast->data!=slow->data) return false;
        
        slow = slow->next;
        fast = fast->next;
    }
    
    return true;
}

