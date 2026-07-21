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
        int size = 0;
        ListNode* curr = head;
        while(curr != nullptr){
            size++;
            curr = curr->next;
        }

        int target = size-n;
        if(target == 0){
            head = head->next;
            return head;
        }
        
        ListNode* prev = nullptr;
        curr = head;
        
        int count = 0;
        while(curr != nullptr){
            if(count == target){
                prev->next = curr->next;
                delete curr;
                return head;
            }
            prev = curr;
            curr = curr->next;
            count++;
        }
        return head;
    }
};
