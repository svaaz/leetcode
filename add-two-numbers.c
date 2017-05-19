/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
 #define null NULL
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode* templ1;
    struct ListNode* templ2;
    struct ListNode* result;
    struct ListNode* headresult;
    int carry = 0;
    
    headresult =malloc(sizeof(struct ListNode));
    result = headresult;
    
    templ1 = l1;
    templ2 = l2;
    
    while(templ1 && templ2)
    {
        result->val= templ1->val +templ2->val+carry;
        result->next =null;
        carry =0;
        if(result->val >= 10)
        {
            result->val = result->val -10;
            carry = 1;
        }
        templ1 = templ1->next;
        templ2 = templ2->next;
        
        if(templ1 && templ2)
        {
            result->next = malloc(sizeof(struct ListNode));
            result = result->next;
        }
     }
       
    if(carry ==1 && templ1==null && templ2 == null)
     {
        result->next = malloc(sizeof(struct ListNode));
        result = result->next;
        result->val = carry;
        result->next = null;
        carry =0;
     }
     

     while(templ1)
     {
         result->next = malloc(sizeof(struct ListNode));
         result = result->next;
         result->val =templ1->val+carry;
         result->next = null;
         carry = 0;
          if(result->val >= 10)
        {
            result->val = result->val -10;
            carry = 1;
        }
         templ1 = templ1->next;
      }
    
     while(templ2)
     {
         result->next = malloc(sizeof(struct ListNode));
         result = result->next;
         result->val =templ2->val+carry;
         result->next = null;
         carry = 0;
        if(result->val >= 10)
        {
            result->val = result->val -10;
            carry = 1;
        }
         templ2 = templ2->next;
     }
     
     if(carry ==1)
     {
        result->next = malloc(sizeof(struct ListNode));
        result = result->next;
        result->val = carry;
        result->next = null;
     }
     

    return headresult;
}
