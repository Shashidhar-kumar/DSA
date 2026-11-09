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
bool ispal(vector<int>&vec){
    if(vec.size()==1) return true;
    int i=0;
    int j=vec.size()-1;
    while(i<=j){
        if(vec[i]!=vec[j]) return false;
        i++;
        j--;
    }
    return true;
}
    bool isPalindrome(ListNode* head) {
        vector<int>vec;
        ListNode* node=head;
        while(node!=NULL){
            vec.push_back(node->val);
            node=node->next;
        }
        return ispal(vec);
    }
};