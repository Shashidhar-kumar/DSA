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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* node=head;
        int left=-1;
        int right=-1;
        int count=0;
        int size=0;
        while(node!=NULL){
            size++;
            node=node->next;
        }
        node=head;
        while(node!=NULL){
            count++;
            if(count==k){
                left=node->val;
            }
            if(count==size-k+1){
                right=node->val;
            }
            node=node->next;
        }
        node=head;
        int finaln=0;
        while(node!=NULL){
            finaln++;
            if(finaln==k){
                node->val=right;
            }
            if(finaln==size-k+1){
                node->val=left;
            }
            node=node->next;
        }
        return head;
    }
};