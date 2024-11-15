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
    bool isPalindrome(ListNode* head) {
        // brute force would be to create a stack and pop on in if 
        
        // two pointer approach with slow and fast pointers where slow finds the midpoint of linkedlist
        //find midpoint
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // reverse second half
        ListNode* prev = nullptr;
        while(slow != nullptr){
            ListNode* temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        
        ListNode* left = head;
        ListNode* right = prev;
        
        while(right != nullptr){
            if(left->val == right->val){
                left = left->next;
                right = right->next;
            } else {
                return false;
            }
        }
        
        return true;
        
        
    }
};