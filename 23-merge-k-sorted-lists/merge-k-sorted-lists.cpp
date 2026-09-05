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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>answer;
        for(int i=0;i<lists.size();i++){
            ListNode*temp=lists[i];
            while(temp!=NULL){
                answer.push_back(temp->val);
                temp=temp->next;
            }
        }
        if(answer.empty()) return NULL;
            sort(answer.begin(),answer.end());
            ListNode* head=new ListNode(answer[0]);
            ListNode* node=head;
            for(int i=1;i<answer.size();i++){
                ListNode* curr=new ListNode(answer[i]);
                node->next=curr;
                node=curr;
            }
        return head;
    }
        
};