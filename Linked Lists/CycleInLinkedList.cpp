#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head){
            return nullptr;
        }
        if(!head->next){
            return nullptr;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){//detects that there is a cycle
                slow = head;//slow assigning it to the head 
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;                    
                }
                return slow ;
            }
           
        }
        return nullptr;
    }
};
