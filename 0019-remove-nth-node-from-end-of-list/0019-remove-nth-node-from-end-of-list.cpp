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
        if(head==NULL){
            return head;
        }
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        int pos=len-n+1;
        if(pos==1){
            ListNode* temp=head;
            head=head->next;
            delete(temp);
            return head;
        }
        //ListNode* temp=head;
        temp=head;
        int cnt=0;
        ListNode* prev=NULL;
        while(temp!=NULL){
            cnt++;
            if(cnt==pos){
                prev->next=temp->next;
                delete(temp);
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};