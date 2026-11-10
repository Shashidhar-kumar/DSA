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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* prev=NULL;
        ListNode* first=head;
        int n=0;
        while(first!=NULL){
            n++;
            first=first->next;
        }
        ListNode* node=head;
        int i=0;
        while(node!=NULL){
            if(i==n/2){
            prev->next=node->next;
            delete node;
            break;
           }   
        prev=node;
        node=node->next;
        i++;
        }
        return head;
    }
};