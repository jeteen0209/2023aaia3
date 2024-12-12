//week14-1.cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        int carry = 0;
        while(l1 != nullptr && l2 != nullptr){
            int here = l1->val + l2->val + carry;
            carry = here / 10;
            now->next = new ListNode( here%10 );
            now = now->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        return ans->next;
    }
};
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
