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
    int pairSum(ListNode* head) {
        ListNode* node=head;
        vector<int>vec;
        while(node!=NULL){
            vec.push_back(node->val);
            node=node->next;
        }
        int first=0;
        int second=vec.size()-1;
        int maxi=INT_MIN;
        int sum=0;
        while(first<=second){
            sum=vec[first]+vec[second];
            maxi=max(maxi,sum);
            sum=0;
            first++;
            second--;
        }
        return maxi;
    }
};