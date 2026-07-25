class Solution {
public:
    ListNode*reverse(ListNode* head){  // if needed reverse, although leetcode already gives a reversed LL
        ListNode* temp=head;
        ListNode* prev=nullptr;
        ListNode* next=nullptr;
        while(temp!=nullptr){
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;

        }
      return prev;  
    }

     ListNode* remove0(ListNode* head){  //if needed (gfg asks for this case)
        while(head!=nullptr && head->val==0 && head->next!=nullptr){
            head=head->next;
        }
     } 

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { //main function (leetcode valid)


        ListNode*dummy= new ListNode(0);
        int carry=0;
        ListNode* curr=dummy;
        while(l1 != nullptr || l2!=nullptr  || carry!=0){
            int val1= (l1 !=nullptr)? l1->val :0;
            int val2= (l2 !=nullptr)? l2->val :0;
            int sum= val1+val2+carry;
        carry=sum/10;
            curr->next=new ListNode(sum%10);
           curr= curr->next; 
           
           if(l1 !=nullptr) l1=l1->next;
           if(l2 != nullptr)l2=l2->next;
          }
   ListNode*result  = dummy->next;
delete dummy;
return result; }
};