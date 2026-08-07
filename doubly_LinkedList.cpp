//----------------------------------------DOUBLY LINKED LIST-----------------------------------------------------

// Insertion
/*
#include <iostream>
using namespace std;
class Node
{
public:
    Node *prev;
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_LL(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    cout << "Length of Linked List: " << len << endl;
}
void InsertAtHead(Node *&head, int data)
{
    Node *insertNode = new Node(data);
    if (head == NULL)
    {
        head = insertNode;
        return;
    }
    insertNode->next = head;
    head->prev = insertNode;
    head = insertNode;
}
void InsertAtTail(Node *&head, Node *&tail, int data)
{
    // Node *temp = head;
    Node *insertNode = new Node(data);
    if (head == NULL)
    {
        head = insertNode;
        tail = insertNode;
    }
    // while (temp->next != NULL)
    // {
    //     temp = temp->next;
    // }

    tail->next = insertNode;
    insertNode->prev = tail;
    tail = insertNode;
    cout << endl;
}

void InsertAtPos(Node *&head, Node *&tail, int data)
{
    int pos;
    cout << "Enter position:";
    cin >> pos;
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (pos == 1)
    {
        Node *insertNode = new Node(data);
        if (head == NULL)
        {
            head = insertNode;
            return;
        }
        insertNode->next = head;
        head->prev = insertNode;
        head = insertNode;
        return;
    }
    if (pos == count + 1)
    {
        Node *insertNode = new Node(data);
        if (head == NULL)
        {
            head = insertNode;
            tail = insertNode;
            return;
        }
        // while (temp->next != NULL)
        // {
        //     temp = temp->next;
        // }

        tail->next = insertNode;
        insertNode->prev = tail;
        tail = insertNode;
        cout << endl;
        return;
    }
    Node *prevNode = head;
    Node *nextNode = head;
    Node *insertNode = new Node(data);
    for (int i = 1; i < pos - 1; i++)
    {
        prevNode = prevNode->next;
    }
    for (int i = 1; i < pos; i++)
    {
        nextNode = nextNode->next;
    }
    insertNode->next = nextNode;
    nextNode->prev = insertNode;
    insertNode->prev = prevNode;
    prevNode->next = insertNode;
    cout << endl;
}
int main()
{
    Node *node1 = new Node(30);
    Node *head = node1;
    InsertAtHead(head, 10);
    InsertAtHead(head, 20);
    InsertAtHead(head, 50);
    print_LL(head);
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    // InsertAtTail(head, tail, 60);
    InsertAtPos(head, tail, 80);
    print_LL(head);
    getLength(head);
    cout << "Head's data:" << head->data << endl;
    cout << "Tail's data:" << tail->data << endl;
}
    */

// Deletion
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "Node deleted Successfully!" << endl;
    }
};
void InsertNode(Node *&head, Node *&tail, int data)
{
    Node *node = new Node(data);
    if (head == NULL)
    {
        head = node;
        tail = node;
        return;
    }
    tail->next = node;
    node->prev = tail;
    tail = node;
}
void DeleteAtHead(Node *&head, Node *&tail)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        delete (temp);
        return;
    }
    head = head->next;
    head->prev = NULL;
    delete (temp);
}
void DeleteAtTail(Node *&tail, Node *&head)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "List is already empty!" << endl;
        return;
    }

    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    tail = tail->prev;
    tail->next = NULL;
    delete (temp);
}
void DeleteAtPos(Node *&head, Node *&tail)
{
    int pos;
    cout << "Enter position: ";
    cin >> pos;
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    // deletion of first node
    if (pos == 1)
    {
        DeleteAtHead(head, tail);
        return;
    }
    if (pos == count)
    {
        DeleteAtTail(tail, head);
        return;
    }
    if (pos < 1 || pos > count)
    {
        cout << "Invalid Position!!" << endl;
        return;
    }
    Node *currentNode = head;
    Node *prevNode = head;
    for (int i = 1; i < pos - 1; i++)
    {
        prevNode = prevNode->next;
    }
    for (int i = 1; i < pos; i++)
    {
        currentNode = currentNode->next;
    }
    prevNode->next = currentNode->next;
    currentNode->next->prev = prevNode;
    delete currentNode;
}

void print_LL(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty, pls enter data!" << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // while(tail->next!=NULL){
    //     tail=tail->next;
    // }
    InsertNode(head, tail, 10);
    InsertNode(head, tail, 20);
    // InsertNode(head, tail, 30);
    // InsertNode(head, tail, 40);
    print_LL(head);
    // DeleteAtHead(head);
    // print_LL(head);
    // DeleteAtTail(tail,head);
    DeleteAtPos(head, tail);
    print_LL(head);
}
