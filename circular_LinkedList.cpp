#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "Node deleted Successfully" << endl;
    }
};
void InsertNode(Node *&tail, int element, int data)
{
    Node *insertNode = new Node(data);
    // assuming element is present in the list
    if (tail == NULL) // list is empty!
    {
        tail = insertNode;
        insertNode->next = insertNode;
        return;
    }
    Node *current = tail;
    while (current->data != element)
    {
        current = current->next;
    }
    insertNode->next = current->next;
    current->next = insertNode;
}
void Deletion(Node *&tail, int elt)
{
    Node *prevNode = tail;
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    if (tail->next == tail)  //single node
    {
        Node *temp3 = tail;
        tail = NULL;
        delete temp3;
        return;
    }
    if (tail->data == elt)
    {
        Node *temp1 = tail;
        Node*temp2=tail;
        while(temp2->next!=temp1){
            temp2=temp2->next;
        }
        tail = tail->next;
        temp2->next=tail;
        temp1->next = NULL;
        delete temp1;
        return;
    }
    while (temp->data != elt)
    {
        prevNode = temp;
        temp = temp->next;
    }
    prevNode->next = temp->next;
    temp->next = NULL;
    delete temp;
}
void print_LL(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "List is Empty!!" << endl;
        return;
    }

    // while (temp->next!= tail)
    // {
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<temp->data;
    // cout<<endl;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}
int main()
{
    Node *tail = NULL;
    InsertNode(tail, 1, 2);
    InsertNode(tail, 2, 3);
    InsertNode(tail, 3, 4);
    InsertNode(tail, 3, 10);
    InsertNode(tail, 4, 12);
    print_LL(tail);
    cout << tail->data << endl;
    Deletion(tail, 2);
    print_LL(tail);
}