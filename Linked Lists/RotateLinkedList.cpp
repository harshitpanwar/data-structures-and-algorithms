#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};



class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=NULL;
       stack<ListNode*>st;
        if(head==NULL){
            return NULL;
        }
        int l=0;
        while(temp!=NULL){
            st.push(temp);
            l++;
            temp=temp->next;
        }
        if(k>=l){
            k=k%l;
        }
        while(k!=0 && st.size()>0){
            ListNode* last=st.top();
            st.pop();
            last->next=head;
            head=last;
            st.top()->next=NULL;
            k--;
        }
        return head;
    }
};
