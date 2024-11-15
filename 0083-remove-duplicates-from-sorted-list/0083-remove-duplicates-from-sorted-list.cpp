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
    ListNode* deleteDuplicates(ListNode* head) {
        // are we allowed to use another data structure?
        // don't need another data structure
        
        ListNode* curr = head;
        while(curr != nullptr){
            while(curr->next != nullptr && curr->val ==  curr->next->val){
                curr->next = curr->next->next;
            }
            curr = curr->next;
        }
        return head;
        
        
    }
};