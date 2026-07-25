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
    ListNode* partition(ListNode* head, int x) {
        ListNode* node=head;
        ListNode* prev=NULL;
        ListNode* first=NULL;
        while(node!=NULL){
            if(node->val<x){
                ListNode* nodefirst=new ListNode(node->val);
                if(prev==NULL){
                    first=nodefirst;
                }
                else{
                    prev->next=nodefirst;
                }
                prev=nodefirst;
            }
            node=node->next;
        }
        ListNode* greater=head;
        ListNode* match=greater;
        ListNode* second=NULL;
        ListNode* prev2=NULL;
        while(greater!=NULL){
            if(greater->val>=x){
                ListNode* nodesecond=new ListNode(greater->val);
                if(prev2==NULL){
                    second=nodesecond;
                }
                else{
                    prev2->next=nodesecond;
                }
                prev2=nodesecond;
            }
            greater=greater->next;
        }
        if(first==NULL) return second;
        prev->next=second;
        return first;

    }
};