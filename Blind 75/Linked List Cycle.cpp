/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        

        // TC: O(N) and SC: O(1)
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;

        while (slowPtr != nullptr)
        {
            if (fastPtr == nullptr || fastPtr->next == nullptr) return false;

            if (fastPtr->next == slowPtr) return true;

            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }

        return false;

        // // O(N) time and O(N) space
        // unordered_set<ListNode*> nodeSet;

        // while (head != nullptr)
        // {
        //     if (nodeSet.find(head) != nodeSet.end()) return true;

        //     nodeSet.insert(head);
        //     head = head->next;
        // }

        // return false;
    }
};