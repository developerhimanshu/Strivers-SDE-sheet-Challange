/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    if(!num1)return num2;
    if(!num2)return num1;
    
    int sum = num1->data+num2->data;
    string nm = to_string(sum);
    Node*head = new Node((int)(nm[nm.length()-1]-'0'));
    int carry = 0;
    if(nm.length()>1)
        carry = nm[0]-'0';
    num1 = num1->next;
    num2 = num2->next;
    Node *temp = head;
    // temp->next = nullptr;
    while(num1 && num2){
        sum = num1->data + num2->data + carry;
        nm = to_string(sum); 
        if(sum<=9)carry = 0;
        else carry = nm[0]-'0';
        temp->next = new Node((int)(nm[nm.length()-1]-'0'));
        num1=num1->next;
        num2 = num2->next;
        temp = temp->next;
    }
    if (num1) {
        while(num1 &&  carry>0){
            sum = num1->data  + carry;
            nm = to_string(sum); 
            if(sum<10)carry = 0;
            else carry = nm[0]-'0';
            temp->next  = new Node((int)(nm[nm.length()-1]-'0'));
            temp = temp->next;
            num1 =  num1->next;
        }
        temp->next = num1;
    }
    if(num2){
        while(num2 &&  carry>0){
            sum = num2->data  + carry;
            nm = to_string(sum); 
            if(sum<10)carry = 0;
            else carry = nm[0]-'0';
            temp->next  = new Node((int)(nm[nm.length()-1]-'0'));
            temp = temp->next;
            num2 =  num2->next;
        }
        temp->next = num2;
    }
    if(carry>0)temp->next = new Node(carry);
    return head;
}
