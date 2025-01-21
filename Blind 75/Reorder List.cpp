/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reverseList(ListNode* head, ListNode* tail)
    {
        ListNode* prev = nullptr;
        ListNode* front = nullptr;

        while (head != tail)
        {
            front = head->next;
            head->next = prev;
            prev = head;
            head = front;
        }

        return prev;
    }

    void reorderList(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondHalf = reverseList(slow->next, nullptr);

        slow->next = nullptr;

        ListNode* firstHalf = head;

        while (secondHalf != nullptr)
        {
            ListNode* temp1 = firstHalf->next;
            ListNode* temp2 = secondHalf->next;

            firstHalf->next = secondHalf;
            secondHalf->next = temp1;

            firstHalf = temp1;
            secondHalf = temp2;
        }
    }
};