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
    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr){
            ListNode* forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* a=NULL;
        ListNode* b=NULL;
        ListNode* c=NULL;
        ListNode* d=NULL;
        ListNode* temp=head;
        int count=1;
        while(temp){
            if(count==left-1){
                a=temp;
            }
            if(count==left){
                b=temp;
            }
            if(count==right){
                c=temp;
            }
            if(count==right+1){
                d=temp;
            }
            count++;
            temp=temp->next;
        }
        if(a!=NULL) a->next=NULL;
        c->next=NULL;
        ListNode* rev=reverse(b);
        if (a) {
            a->next = rev;
        } else {
            head = rev;  // If left == 1, update head
        }

        // Connect the remaining part
        b->next = d;

        return head;


        

        
    }
};