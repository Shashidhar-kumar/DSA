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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>vec;
        ListNode* node=head;

        while(node!=NULL){
            vec.push_back(node->val);
            node=node->next;
        }
        int i=left-1;
        int j=right-1;
        while(i<=j){
            swap(vec[i],vec[j]);
            i++;
            j--;
        }
        ListNode* newHead=new ListNode(vec[0]);
        ListNode* curr=newHead;
        for(int i=1;i<vec.size();i++){
            ListNode* currnode=new ListNode(vec[i]);
            curr->next=currnode;
            curr=currnode;
        }
        return newHead;
    }
};