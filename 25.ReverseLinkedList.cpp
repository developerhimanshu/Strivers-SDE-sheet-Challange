#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==NULL || head->next==NULL)return head;
    LinkedListNode<int> *nex = head->next;
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *curr = head;
    while(nex!=NULL){
        curr->next = prev;
        prev = curr;
        curr = nex;
        nex = nex->next;
    }
    curr->next = prev;
    return curr;
}