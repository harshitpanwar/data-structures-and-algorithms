#include<bits/stdc++.h>
using namespace std;

int main(){
    //driver code here
    return 0;
}

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


class Solution {
public:
    bool isPalindrome(ListNode* head) {
       ListNode *fast=head,*slow=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
       
        ListNode *prev=NULL,*next;
        
        while(slow!=NULL)
        {
            ListNode *next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }  
        
      next=head;
        
      while(prev!=NULL)
        {
            if(next->val != prev->val)
                return false;
            next=next->next;
            prev=prev->next;
        }   
        return true;
    }
};