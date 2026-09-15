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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>vec1;
        vector<int>vec2;
        ListNode* node1=list1;
        ListNode* node2=list2;
        while(node1!=NULL){
            vec1.push_back(node1->val);
            node1=node1->next;
        }
        while(node2!=NULL){
            vec2.push_back(node2->val);
            node2=node2->next;
        }
        vector<int>ans=vec1;
        for(int i=0;i<vec2.size();i++){
            ans.push_back(vec2[i]);
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==0) return NULL;
        ListNode* head=new ListNode(ans[0]);
        ListNode* node=head;
        for(int i=1;i<ans.size();i++){
            ListNode* curr=new ListNode(ans[i]);
            node->next=curr;
            node=curr;
        }
        return head;
    }
};