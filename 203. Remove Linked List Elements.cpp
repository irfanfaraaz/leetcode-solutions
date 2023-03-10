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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL&&head->val==val){
            head=head->next;
        }
        if(head==NULL){
            return head;
        }
      
        else{
            ListNode *temp=head->next;
            ListNode *temp2=head;
            while(temp!=NULL){
                
                
                if(temp->val!=val){
                    temp=temp->next;
                    temp2=temp2->next;
                }
                else{
                    temp=temp->next;
                    temp2->next=temp;
                    
                }
            }
            return head;
        }
        
    }
};
