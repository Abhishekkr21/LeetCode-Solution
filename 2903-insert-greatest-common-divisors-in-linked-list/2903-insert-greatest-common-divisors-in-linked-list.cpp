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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL)
        return head;
        ListNode* head1 = head;
        while(head->next)
        {
            int x = __gcd(head->val,head->next->val);
            ListNode* temp = new ListNode(x);
            temp->next=head->next;
            head->next=temp;
            head=temp->next;
        }
        return head1;
        
    }
};