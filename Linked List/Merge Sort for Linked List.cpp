// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/

/* Function to mergesort the linked list
   It should return head of the modified list  */

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

Node* mergeSort(Node* head) {
    
    if(head==NULL || head->next==NULL) return head;
    
    Node* mid = Split(head);
    Node* midNext = mid->next;
    mid->next = NULL;
    
    Node* left = mergeSort(head);
    Node* right = mergeSort(midNext);
    
    Node* newhead = sortedMerge(left,right);
    
    return newhead;
}


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        a = mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends
