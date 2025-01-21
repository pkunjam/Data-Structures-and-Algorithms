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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        // TC: O(N) with O(1) space
        if (!head->next) return nullptr;

        int size = 0;
        ListNode* temp = head;

        while (temp)
        {
            temp = temp->next;
            size++;
        }

        int nth = size - n;
        int i = 0;

        temp = head;

        if (i == nth)
        {
            return (head = head->next);
        }

        else
        {
            while (temp)
            {
                if (temp->next && (i + 1) == nth)
                {
                    if (temp->next->next) temp->next = temp->next->next;
                    else temp->next = nullptr;
                    break;
                }

                temp = temp->next;
                i++;
            }
        }

        return head;
    }
};