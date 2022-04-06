#include <iostream>
using namespace std;
/*Algorithm to perform Merge Sort for Linked List:
1. If there's only one element, return.
2. Divide linked list into two halves. Starting addr. required.
3. Sort the two halves of which, we have starting addresses
*/
struct Node {
    int data;
    struct Node *next;
};
void display(struct Node *start)    {
    if(start == NULL)   cout<<"Linked List is Empty\n";
    else {
        do {
            cout<<start->data<<"\t";
            start = start->next;
        }while(start!=NULL);
        cout<<"\n";
    }
}
void split(struct Node *start,struct Node **first_addr,struct Node **second_addr)
{
    struct Node *tortoise,*hare;
    tortoise = start;
    hare = start->next;
    while(hare!=NULL && hare -> next != NULL) {
         
        hare = hare->next;
        tortoise = tortoise->next;
        
    }
    *first_addr = start;
    *second_addr = tortoise->next;
    tortoise->next = NULL;
}
struct Node* mergeAndSort(struct Node *first_addr,struct Node *second_addr) {
    Node *new_start = NULL;
    if(first_addr == NULL)  return second_addr;
    if(second_addr == NULL) return first_addr;
    if(first_addr->data <= second_addr->data)   {
        new_start = first_addr;
        new_start->next = mergeAndSort(first_addr->next,second_addr);
    }
    else    {
        new_start = second_addr;
        new_start->next = mergeAndSort(first_addr,second_addr->next);
    }
    return new_start;
}
void mergeSort(struct Node **ref)  {
    struct Node *start = *ref;
    if(start == NULL || start->next == NULL)
        return;
    struct Node *first_addr,*second_addr;
    split(start,&first_addr,&second_addr);
    mergeSort(&first_addr);
    mergeSort(&second_addr);
    *ref = mergeAndSort(first_addr,second_addr);
}
int main()  {
    struct Node n1,n2,n3,n4,n5,*start;
    n1.data = 40;
    n2.data = 30;
    n3.data = 50;
    n4.data = 20;
    n5.data = 70;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;
    start = &n1;
    display(start);
    mergeSort(&start);
    display(start);
    return 0;
}
