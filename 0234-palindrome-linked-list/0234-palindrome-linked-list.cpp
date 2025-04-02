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
    // ListNode* getNode(ListNode* head,int n){
    //     ListNode* temp=head;
    //     for(int i=1;i<=n;i++){
    //         temp=temp->next;
    //     }
    //     return temp;

    // }
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
    bool isPalindrome(ListNode* head) {
        // int count=0;
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     count++;
        //     temp=temp->next;
        // }
        // int i=0;
        // int j=count-1;
        // while(i<j){
        //    ListNode* first=getNode(head,i);
        //    ListNode* last=getNode(head,j);
        //    if(first->val!=last->val){
        //         return false;
        //    }
        //    i++;
        //    j--;
        // }
        // return true;


        // this is anothe method of the Linke List

        ListNode* c=new ListNode(0);
        ListNode* temp=head;
        ListNode* tempC=c;
        while(temp){
            ListNode* node=new ListNode(temp->val);
            //firstly we point the tempC next to node
            tempC->next=node;
            temp=temp->next;
            tempC=tempC->next;
        }
        c=c->next;
        temp=head;
        ListNode* rev=reverse(c);
        while(rev!=NULL&&head!=NULL){
            if(temp->val!=rev->val){
                return false;
            }
            temp=temp->next;
            rev=rev->next;
        }
        if(rev!=NULL||temp!=NULL){
            return false;
        }
        return true;


        





        
    }
};