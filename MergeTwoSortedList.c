class Solution {
public:
       ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode dummy(0);
         ListNode * current = & dummy;

         while(list1 != NULL && list2 != NULL) {
           if(list->val<=list2->val) {
             current->next = list;
           } else{
             current->next = list2;
             list2 = list ->next;
           }
           current = current ->next;
         }
         if(list != NULL)
           current ->next = list1;
         else
           current ->next = list2;
         return dummy.next;
       }
};
