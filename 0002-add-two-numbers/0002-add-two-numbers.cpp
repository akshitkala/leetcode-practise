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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool carry=false;
        ListNode head(0);
        ListNode* tail=&head;
        while(l1 || l2){
            int sum=0;
            if(l1){
            sum+=l1->val;
            l1=l1->next;
            } 
            
            if(l2){
            sum+=l2->val;
            l2=l2->next;
            } 
            
            if(carry) sum++;
            if(sum>9){
             carry=true;
            }else{
                carry=false;
            }
            ListNode* temp=new ListNode();
            temp->next=NULL;
            temp->val=sum%10;
            tail->next=temp;
            tail=temp;
        }
        if(carry){
            ListNode* last= new ListNode(1);
            tail->next=last;
        }
        return head.next;

    }
};