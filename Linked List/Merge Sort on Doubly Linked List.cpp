// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next, *prev;
	
	Node (int x){
	    data = x;
	    next = NULL;
	    prev = NULL;
	}
};


 // } Driver Code Ends
/*
Structure of the node of the list is as
struct Node
{
	int data;
	struct Node *next, *prev;
	Node (int x){
	    data = x;
	    next = prev = NULL;
	}
}; */

Node* Split(Node* head){
    
    if(head==NULL) return head;
    
    Node* slow = head;
    Node* fast = head;
    
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}


Node* sortedMerge(Node* a, Node* b){
    
    if(a==NULL) return b;
    if(b==NULL) return a;
    
    Node* res=NULL;
    
    if(a->data<=b->data)
    {
        res=a;
        res->next = sortedMerge(a->next,b);
    }
    
    else
    {
        res=b;
        res->next = sortedMerge(a,b->next);
    }
    
    return res;
}

// Function to merge two DLLs
struct Node *sortDoubly(struct Node *head)
{
	if(head==NULL || head->next==NULL) return head;
    
    Node* mid = Split(head);
    Node* midNext = mid->next;
    mid->next = NULL;
    
    Node* left = sortDoubly(head);
    Node* right = sortDoubly(midNext);
    
    Node* newhead = sortedMerge(left,right);
    
    Node* temp = newhead;
    temp->prev = NULL;
    Node* curr = temp->next;
    
    while(curr!=NULL)
    {
        curr->prev = temp;
        temp = curr;
        curr = curr->next;
    }
    
    return newhead;
}


// { Driver Code Starts.

void insert(struct Node **head, int data)
{
	struct Node *temp = new Node (data);
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

void print(struct Node *head)
{
	struct Node *temp = head;
	while (head)
	{
		cout<<head->data<<' ';
		temp = head;
		head = head->next;
	}
	cout<<endl;
	while (temp)
	{
		cout<<temp->data<<' ';
		temp = temp->prev;
	}
	cout<<endl;
}

// Utility function to swap two integers
void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}


// Driver program
int main(void)
{
    long test;
    cin>>test;
    while(test--)
    {
        int n, tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            insert(&head, tmp);
        }
        head = sortDoubly(head);
        print(head);
    }
	return 0;
}
  // } Driver Code Ends
