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
// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//        if(head==NULL || k<=1){
//         return head;
//        }
//        ListNode* prev=NULL;
//        ListNode* curr=head;
//        ListNode* next=NULL;
//        int count=0;
//        while(curr!=NULL && count<k){
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//         count++;
//        }
//        head->next=curr;
//        return prev;
//     }
// };
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL) return NULL;

        // Step 1: Check if at least k nodes exist
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL && count < k) {
            temp = temp->next;
            count++;
        }

        // If less than k nodes → return head as it is
        if(count < k) return head;

        // Step 2: Reverse first k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        count = 0;

        while(curr != NULL && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Step 3: Recursively reverse remaining list
        head->next = reverseKGroup(curr, k);

        return prev; // new head of this group
    }
};