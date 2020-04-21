// { Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void append(Node** head_ref, Node **tail_ref, int new_data)
{
    Node* newnode = new Node(new_data);
    
    if(*head_ref == NULL)
        *head_ref = newnode;
    else
        (*tail_ref)->next = newnode;
    *tail_ref = newnode;
}

Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K;
        cin>>num>>K;
        int temp;
        Node* head = NULL;
        Node* tail = NULL;
        for(int i = 0; i<num; i++){
            cin>>temp;
            append(&head, &tail, temp);
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends
//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

// Should swap Kth node from beginning and Kth
// node from end in list and return new head.
Node *swapkthnode(Node* head, int n, int k)
{
    if(head == NULL || k>n) return head;
    
    Node* A = head;
    Node* B = head;
    Node* prevA = NULL;
    Node* prevB = NULL;
    Node* temp = NULL;
    
    int len = n-k+1;
    
    for(int i=1;i<k;i++)
    {
        prevA = A;
        A = A->next;
    }
    
    for(int i=1;i<len;i++)
    {
        prevB = B;
        B = B->next;
    }
    
    if(A==B) return head;
    
    if(A==head && B->next==NULL)
    {
        temp = A->next;
        B->next = temp;
        prevB->next = A;
        A->next = NULL;
        head = B;
        return head;
    }
    
    if(B==head && A->next==NULL)
    {
        temp = B->next;
        A->next = temp;
        prevA->next = B;
        B->next = NULL;
        head = A;
        return head;
    }
    
    if(A->next == B)
    {
        temp = B->next;
        B->next = A;
        A->next = temp;
        prevA->next = B;
        return head;
    }
    
    if(B->next == A)
    {
        temp = A->next;
        A->next = B;
        B->next = temp;
        prevB->next = A;
        return head;
    }
    
    temp = B->next;
    B->next = A->next;
    A->next = temp;
    prevA->next = B;
    prevB->next = A;
    
    return head;
}
