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
    ListNode* addRecur(ListNode* ans, ListNode* l1, ListNode* l2, int aux) {
        if(l1->val + l2->val + aux == 10) {
                ans->val = 0;
                aux = 1;
            } else if(l1->val + l2->val + aux > 10) {
                ans->val = ((l1->val + l2->val) % 10) + aux;
                aux = 1;
            } else {
                ans->val = l1->val + l2->val + aux;
                aux = 0;
            }
        if(l1->next == NULL && l2->next == NULL) {
            if(aux != 0) {
                ans->next = new ListNode();
                ans->next->val = 1;
            }
            return ans;
        } else {
            ans->next = new ListNode();
            if(l1->next  == NULL) {
        
            l1->val = 0;
            return addRecur(ans->next, l1, l2->next, aux);
             } else if(l2->next  == NULL) {
            
                            l2->val = 0;

            return addRecur(ans->next, l1->next, l2, aux);
        } else {
            return addRecur(ans->next, l1->next, l2->next, aux);
        }
        }
        
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        addRecur(ans, l1, l2, 0);
        return ans;
    }
};
