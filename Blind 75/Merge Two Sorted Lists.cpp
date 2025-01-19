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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* head = new ListNode(0);
        ListNode* tail = head;

        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
            }

            else
            {
                tail->next = list2;
                list2 = list2->next;
            }

            tail = tail->next;
        }

        if (!list1) tail->next = list2;
        else tail->next = list1;

        return head->next;

        // // TC: O(m+n) and O(m+n) extra space
        // if (list1 == nullptr) return list2;
        // if (list2 == nullptr) return list1;

        // vector<int> arr;

        // ListNode* temp = list1;

        // while (temp != nullptr)
        // {
        //     arr.emplace_back(temp->val);
        //     temp = temp->next;
        // }

        // temp = list2;

        // while (temp != nullptr)
        // {
        //     arr.emplace_back(temp->val);
        //     temp = temp->next;
        // }

        // sort(arr.begin(), arr.end());

        // temp = new ListNode(arr[0]);
        // ListNode* head = temp;

        // for (int i = 1; i < arr.size(); i++)
        // {
        //     temp->next = new ListNode(arr[i]);
        //     temp = temp->next;
        // }

        // return head;
    }
};