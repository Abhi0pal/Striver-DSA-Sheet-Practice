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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>vc;
        vector<int>ans;
        ListNode* temp=head;

        while(temp!=NULL){
            vc.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<vc.size();i++){
            int x=0;
            for(int j=i;j<vc.size();j++){
                if(vc[j]>vc[i]){
                    x=vc[j];
                    break;
                }
            }
            ans.push_back(x);
        }
        return ans;
        
    }
};