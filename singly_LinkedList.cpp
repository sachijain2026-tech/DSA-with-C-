//----------------------------------------SINGLY LINKED LIST----------------------------------------------

// Insertion
/*
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
};

void InsertAtHead(Node *&head, int data) // at head
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void print_LL(Node *&head) // printing linked list
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtTail(Node *&tail, int data) // at tail
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void InsertAtRandom(Node *&head, int data, Node *&tail)
{
    int pos;
    cout << "Enter the position of insertion: ";
    cin >> pos;
    Node *temp1 = head;
    int count = 0;
    while (temp1 != NULL)
    {
        count++;
        temp1 = temp1->next;
    }
    if (pos > (count + 1) || pos < 1)
    {
        cout << "Invalid Input" << endl;
        return;
    }

    if (pos == 1)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
        return;
    }
    if (pos == count + 1)
    {
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
        return;
    }
    // if (pos == count + 1)
    // {
    //     InsertAtTail(tail, data);
    //     return;
    // }
    Node *temp = head;
    Node *currentNode = new Node(data);
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    currentNode->next = temp->next;
    temp->next = currentNode;
}

int main()
{
    Node *head = NULL;
    Node *node1 = new Node(10);
    head = node1;
    Node *node2 = new Node(20);
    head->next = node2;
    Node *tail = node2;
    InsertAtHead(head, 0);
    print_LL(head);
    cout << "---------------------" << endl;
    InsertAtTail(tail, 30);
    print_LL(head);
    InsertAtRandom(head, 25, tail);
    cout << "---------------------" << endl;
    print_LL(head);
    cout << head->data << endl;
    cout << tail->data << endl;
}
*/

/*
// Deletion
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
        cout << "Node deleted Successfully!!" << endl;
    }
};

// deletion by position
void DeleteAtPos(Node *&head, Node *&tail)
{
    int pos;
    cout << "Enter the position: ";
    cin >> pos;
    Node *temp1 = head;
    int count = 0;
    while (temp1 != NULL)
    {
        count++;
        temp1 = temp1->next;
    }
    if (pos < 1 || pos > count)
    {
        cout << "Invalid Position !!!!" << endl;
        return;
    }
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        temp->next = NULL;
        delete (temp);

        return;
    }
    if (pos == count)
    {
        Node *prevNode = head;
        while (prevNode->next != tail)
        {
            prevNode = prevNode->next;
        }
        prevNode->next = NULL;
        Node *temp = tail;
        tail = prevNode;
        temp->next = NULL;
        delete (temp);
        return;
    }

    Node *prevNode = head;
    for (int i = 1; i < pos - 1; i++)
    {
        prevNode = prevNode->next;
    }
    Node *currentNode = prevNode->next;
    prevNode->next = currentNode->next;
    currentNode->next = NULL;
    delete (currentNode);
}


void print_LL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = (*temp).next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *node1 = new Node(0);
    head = node1;
    Node *node2 = new Node(10);
    head->next = node2;
    Node *node3 = new Node(20);
    node2->next = node3;
    Node *node4 = new Node(30);
    node3->next = node4;
    Node *tail = node4;
    print_LL(head);
    DeleteAtPos(head, tail);
    print_LL(head);
    cout<<tail->data<<endl;
}
    */
