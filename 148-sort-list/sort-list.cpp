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
ListNode* mergeSort(ListNode* list1,ListNode* list2){
    ListNode* head=new ListNode(-1);
    ListNode* dummy=head;
    while(list1!=NULL && list2!=NULL){
        if(list1->val<list2->val){
            head->next=list1;
            list1=list1->next;
        }
        else{
            head->next=list2;
            list2=list2->next;
        }
        head=head->next;
    }
    while(list1!=NULL){
        head->next=list1;
        list1=list1->next;
        head=head->next;
    }
    while(list2!=NULL){
        head->next=list2;
        list2=list2->next;
        head=head->next;
    }
        return dummy->next;

}
ListNode* MiddleNode(ListNode* head){
    ListNode* midprev=NULL;
    while(head!=NULL && head->next!=NULL){
        midprev=(midprev==NULL)?head:midprev->next;
        head=head->next->next;
    }
    ListNode*mid=midprev->next;
    midprev->next=NULL;
    return mid;
}
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* mid=MiddleNode(head);
        ListNode* left=sortList(head);
        ListNode* right=sortList(mid);
        return mergeSort(left,right);
    }
};