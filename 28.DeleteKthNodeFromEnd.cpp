/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    int n = 0;
    Node *temp = head;
    while(temp){
        n+=1;
        temp = temp->next;
    }
    if(n==K)return head->next;
    if(n<K)return head;
    temp = head;
    int i = 1; 
    while(i<(n-K)){
        temp = temp->next;
        i++;
    }
    if(temp){
        auto t = temp->next;
        temp->next = t->next;
        t->next = nullptr;
    }
    return head;
}
