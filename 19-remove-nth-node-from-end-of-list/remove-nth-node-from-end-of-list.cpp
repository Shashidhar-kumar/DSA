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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int>vec;
        ListNode* node=head;
        while(node!=NULL){
            vec.push_back(node->val);
            node=node->next;
        }
        vec.erase(vec.begin()+(vec.size()-n));
        if(vec.size()==0) return NULL;
        ListNode* newhead=new ListNode(vec[0]);
        ListNode* newno=newhead;
        for(int i=1;i<vec.size();i++){
            ListNode* newnode=new ListNode(vec[i]);
            newhead->next=newnode;
            newhead=newnode;
        }
        return newno;
    }
};