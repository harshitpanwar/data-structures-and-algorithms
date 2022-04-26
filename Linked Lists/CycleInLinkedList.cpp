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
            if(slow==fast){
                slow = head;

                if(slow==fast){ 
                    //condition for a circular linked list
                    //this condition only executes if and only if the linked list is a circular linked list
                        while(fast->next != slow) fast = fast->next;
                }
                else{
                        while(slow != fast){
                            slow = slow->next;
                            fast = fast->next;                    
                    }
                }
                return slow ;
            }
        }
        return nullptr;
    }
};

int main(){




}
