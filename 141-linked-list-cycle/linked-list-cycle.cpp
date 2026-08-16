/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int maxi=INT_MIN;
        int i=0;
        unordered_set<ListNode*>mpp;
        ListNode* node=head;
        while(node!=NULL){
            if(mpp.find(node)!=mpp.end()) return true;
            mpp.insert(node);
            node=node->next;
        }
        return false;
    }
};