/*
// REVERSE A SINGLY LINKED LIST
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
void InsertAtHead(Node *&head, int data, Node *&tail) // at head
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
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
void InsertAtTail(Node *&tail, int data) // at tail
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
Node *&reverse_LL(Node *&head, Node *&tail)
{
    Node *currentNode = head;
    Node *prevNode = NULL;
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List is empty!";
        return head;
    }
    if (head->next = NULL)
    {
        return head;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    tail = head;
    head = temp;
    while (currentNode != NULL)
    {
        Node *nextNode = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }

    head = prevNode;
    return head;
}

int main()
{
    Node *head = NULL;
    Node *tail = head;
    InsertAtHead(head, 10, tail);
    tail = head;
    InsertAtRandom(head, 20, tail);
    InsertAtRandom(head, 30, tail);
    InsertAtRandom(head, 40, tail);
    InsertAtRandom(head, 50, tail);
    InsertAtRandom(head, 60, tail);
    print_LL(head);
}
    */

/*
// REVERSE DOUBLY LINKED LIST
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
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        cout << "Node deleted Successfully";
    }
};
void InsertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    if (head->next == NULL)
    {
        tail = head;
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        return;
    }
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void print_LL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *reverse_LL(Node *&head)
{
    Node *prevNode = NULL;
    Node *currentNode = head;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    while (currentNode != NULL)
    {
        Node *nextNode = currentNode->next;
        currentNode->next = prevNode;
        currentNode->prev = nextNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    head = prevNode;
    return head;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtTail(head, tail, 11);
    InsertAtTail(head, tail, 22);
    InsertAtTail(head, tail, 33);
    InsertAtTail(head, tail, 44);
    InsertAtTail(head, tail, 55);
    InsertAtTail(head, tail, 66);
    print_LL(head);
    Node *temp = reverse_LL(head);
    print_LL(temp);
}
    */

/*
// MIDDLE OF LINKED LIST
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
void InsertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (tail == NULL)
    {
        tail = temp;
        head = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}
void print_LL(Node *&head)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void middle_LL(Node *&head)
{
    Node *temp = head;
    int count = 0;
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        cout << head->data << endl;
        return;
    }
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    int pos = 0;
    if (count % 2 == 0)
    {
        pos = (count / 2) + 1;
        Node *temp1 = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp1 = temp1->next;
        }
        cout << temp1->data << endl;
        return;
    }
    else
    {
        pos = (count / 2) + 1;
        Node *temp1 = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp1 = temp1->next;
        }
        cout << temp1->data << endl;
    }
}

// SLOW-FAST ALGORITHM
void middleLL_slowFast(Node *&head)
{
    Node*fast=head->next;
    Node*slow=head;
    while(fast!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<"SLow fast: "<<slow->data<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    print_LL(head);
    InsertAtTail(head, tail, 10);
    InsertAtTail(head, tail, 20);
    InsertAtTail(head, tail, 30);
    InsertAtTail(head, tail, 40);
    InsertAtTail(head, tail, 50);
    InsertAtTail(head, tail, 60);
    InsertAtTail(head, tail, 70);
    print_LL(head);
    middle_LL(head);
    middleLL_slowFast(head);
}
*/
/*
// REVERSE LINKED LIST IN K-GROUPS  --INCOMPLETE HAI--COMPLETE IT!!
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
void InsertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
    return;
}
void print_LL(Node *&head)
{
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
    InsertAtTail(head, tail, 2);
    InsertAtTail(head, tail, 4);
    InsertAtTail(head, tail, 6);
    InsertAtTail(head, tail, 8);
    InsertAtTail(head, tail, 10);
    InsertAtTail(head, tail, 12);
    print_LL(head);
    Node *temp = reverse_K_grp(head);
    print_LL(temp);
}
    */

/*
// CHECK FOR CIRCULAR LINKED LIST OR NOT
#include <iostream>
#include <unordered_map>
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
void InsertNode(Node *&tail, int d)
{
Node *temp = new Node(d);
if (tail == NULL)
{
    tail = temp;
    temp->next = temp;
    return;
}
temp->next = tail->next;
tail->next = temp;
tail = temp;
}
void print_ll(Node *&tail)
{
Node *temp = tail;
if (tail == NULL)
{
    cout << "List is empty" << endl;
    return;
}
do
{
    cout << temp->data << " ";
    temp = temp->next;
} while (temp != tail);
cout << endl;
}
bool isCircularList(Node *&tail)   //T.C.=O(n) & S.C.=O(1) --PREFERRED METHOD
{

if (tail == NULL || tail->next == NULL)
{
    return 0;
}
if (tail->next == tail)
{
    return 1;
}
Node *temp = tail->next;
while (true)
{
    if (temp == tail)
    {
        return 1;
    }
    temp = temp->next;
}
return 0;
}
bool isCircularList2(Node *&tail)    //T.C.=O(N) BUT S.C.=O(N)--USING UNORDERED_MAPS
{
unordered_map<Node *, int> m;
if (tail == NULL || tail->next == NULL)
{
    return 0;
}
Node *temp = tail->next;
while (temp != NULL)
{
    if (m[temp] > 1)
    {
        return true;
    }
    m[temp]++;
    temp = temp->next;
}
return false;
}
int main()
{
Node *tail = NULL;
InsertNode(tail, 10);
InsertNode(tail, 20);
InsertNode(tail, 30);
InsertNode(tail, 40);
InsertNode(tail, 50);
InsertNode(tail, 60);
InsertNode(tail, 70);
print_ll(tail);
int a = isCircularList2(tail);
cout << a << endl;
}
*/

/*
// CYCLE DETECTION IN LINKED LIST
#include <iostream>
#include <unordered_map>
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
void InsertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}
void CycleMade(Node *&head, Node *&tail)
{
    int pos;
    cout << "After what position: ";
    cin >> pos;
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    tail->next = temp;
    cout << "Cycle Made successfully!" << endl;
}
void DetectCycle(Node *&head, Node *&tail)
{

    unordered_map<Node *, bool> m;
    Node *temp = head;
    int pos = 0;
    while (temp != NULL)
    {
        if (m[temp] == true)
        {
            Node *temp1 = head;
            while (temp1 != temp)
            {
                pos++;
                temp1 = temp1->next;
            }
            cout << "it has cycle" << endl;
            cout << "index: " << pos << endl;
            return;
        }
        m[temp] = true;
        temp = temp->next;
    }
    cout << "Cycle not found" << endl;
}
void RemoveCycle(Node*&head){
    Node*temp=head;
    Node*prevNode=NULL;
    unordered_map<Node*,bool>m;
    if(head==NULL || head->next==NULL){
        return;
    }
    while(temp!=NULL){
        if(m[temp]==true){
            prevNode->next=NULL;
            return;
        }
        m[temp]=true;
        prevNode=temp;
        temp=temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    InsertAtTail(head, tail, 7);
    InsertAtTail(head, tail, 6);
    InsertAtTail(head, tail, 2);
    InsertAtTail(head, tail, 4);
    InsertAtTail(head, tail, 9);
    InsertAtTail(head, tail, 3);
    CycleMade(head, tail);
    //DetectCycle(head, tail);
    RemoveCycle(head);
    DetectCycle(head,tail);
}
*/
/*
// REMOVE DUPLICATED FROM SORTED LINKED LIST
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
void InsertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}
void print_LL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void DeleteUnsortedList(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    Node *curr = head;
    while (curr != NULL)
    {
        Node *temp = curr->next;
        Node *prevNode = curr;
        while (temp != NULL)
        {
            if (temp->data == curr->data)
            {
                prevNode->next = temp->next;
                Node *delt = temp;
                delete delt;
                temp = prevNode->next;
            }
            else
            {
                prevNode = temp;
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    InsertAtTail(head, tail, 15);
    InsertAtTail(head, tail, 3);
    InsertAtTail(head, tail, 9);
    InsertAtTail(head, tail, 7);
    InsertAtTail(head, tail, 13);
    InsertAtTail(head, tail, 9);
    InsertAtTail(head, tail, 13);
    InsertAtTail(head, tail, 15);
    print_LL(head);
    DeleteUnsortedList(head);
    print_LL(head);
}
    */

/*
// SPLIT CIRCULAR LINKED LIST
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
void InsertInList(Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (tail == NULL)
    {
        tail = temp;
        temp->next = temp;
        return;
    }
    if (tail == tail->next)
    {
        temp->next = tail->next;
        tail->next = temp;
        return;
    }
    Node *temp1 = tail->next;
    while (temp1->next != tail)
    {
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
    return;
}
void print_LL(Node *&tail)
{
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}
int getLength(Node *&tail)
{
    Node *temp = tail->next;
    int len = 1;
    while (temp != tail)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void SplitCircular_LL(Node *&tail)
{
    cout << "Length = " << getLength(tail) << endl;
    Node *head_1 = tail;
    Node *tail_1 = tail;
    Node *head_2 = NULL;
    Node *tail_2 = tail;
    while (tail_2->next != tail)
    {
        tail_2 = tail_2->next;
    }
    if ((getLength(tail)) % 2 == 0)
    {
        int a = (getLength(tail)) / 2;
        for (int i = 0; i < a - 1; i++)
        {
            tail_1 = tail_1->next;
        }
        head_2 = tail_1->next;
        tail_1->next = tail_2->next;
        tail_2->next = head_2;
        print_LL(head_1);
        print_LL(head_2);
    }
    else
    {
        int a = ((getLength(tail)) / 2);
        int s=a+1;
        for (int i = 0; i < s-1; i++)
        {
            tail_1 = tail_1->next;
        }
        head_2 = tail_1->next;
        tail_1->next = tail_2->next;
        tail_2->next = head_2;
        print_LL(head_1);
        print_LL(head_2);
    }
    cout << "Split successfully Done !!!" << endl;
}
int main()
{
    Node *tail = NULL;
    InsertInList(tail, 10);
    InsertInList(tail, 20);
    InsertInList(tail, 30);
    InsertInList(tail, 40);
    InsertInList(tail, 50);
    InsertInList(tail, 60);
    InsertInList(tail, 70);
    print_LL(tail);
    SplitCircular_LL(tail);
}
    */

/*
// SORT 0s,1s and 2s IN LINKED LIST
#include <iostream>
#include <map>
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
void InsertAtTail(Node *&head, Node *&tail, int d)
{
Node *temp = new Node(d);
if (head == NULL)
{
    head = temp;
    tail = temp;
    return;
}
tail->next = temp;
tail = temp;
return;
}
void print_LL(Node *&head)
{
Node *temp = head;
while (temp != NULL)
{
    cout << temp->data << " ";
    temp = temp->next;
}
cout << endl;
}
void SortLinkedList_I(Node *&head) // using maps
{
map<int, int> m;
Node *temp = head;
while (temp != NULL)
{
    m[temp->data]++;
    temp = temp->next;
}
Node *head1 = NULL;
Node *tail1 = NULL;
for (auto i : m)
{

    for (int j = 0; j < i.second; j++)
    {
        Node *temp1 = new Node(i.first);
        if (head1 == NULL)
        {
            head1 = temp1;
            tail1 = temp1;
        }
        else
        {
            tail1->next = temp1;
            tail1 = temp1;
        }
    }
}
// head=head1;
cout << "Sorted Successfully!" << endl;
print_LL(head1);
}
void SortLinkedList_II(Node *&head) // counting and replacing the values in list
{
Node *temp = head;
int count_0 = 0;
int count_1 = 0;
int count_2 = 0;
while (temp != NULL)
{
    if (temp->data == 0)
    {
        count_0++;
    }
    else if (temp->data == 1)
    {
        count_1++;
    }
    else
    {
        count_2++;
    }
    temp = temp->next;
}
temp = head;
for (int i = 0; i < count_0; i++)
{
    temp->data = 0;
    temp = temp->next;
}
for (int i = 0; i < count_1; i++)
{
    temp->data = 1;
    temp = temp->next;
}
for (int i = 0; i < count_2; i++)
{
    temp->data = 2;
    temp = temp->next;
}
print_LL(head);
}
void SortLinkedList_III(Node *&head) // three separate linked list--INCOMPLETE HAI
{
Node *zeroHead = new Node(-1);
Node *zeroTail = zeroHead;
Node *oneHead = new Node(-1);
Node *oneTail = oneHead;
Node *twoHead = new Node(-1);
Node *twoTail = twoHead;
Node *curr = head;
while (curr != NULL) // create separate list 0s, 1s, 2s
{
    int val = curr->data;
    if (val == 0)
    {
        zeroTail->next = curr;
        zeroTail = curr;
    }
    else if (val == 1)
    {
        oneTail->next = curr;
        oneTail = curr;
    }
    else if (val == 2)
    {
        twoTail->next = curr;
        twoTail = curr;
    }
    curr = curr->next;
}
if (oneHead->next != NULL)
{
    zeroTail->next = oneHead->next;
}
else
{
    zeroTail->next = twoHead->next;
}
oneTail->next = twoHead->next;
twoTail->next = NULL;
head = zeroHead->next;
delete oneHead;
delete zeroHead;
delete twoHead;
print_LL(head);
}
int main()
{
Node *head = NULL;
Node *tail = NULL;
InsertAtTail(head, tail, 1);
InsertAtTail(head, tail, 0);
InsertAtTail(head, tail, 1);
InsertAtTail(head, tail, 2);
InsertAtTail(head, tail, 0);
InsertAtTail(head, tail, 2);
InsertAtTail(head, tail, 0);
InsertAtTail(head, tail, 2);
print_LL(head);
SortLinkedList_III(head);
}
*/
/*

// MERGE 2 LINKED LIST
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
void InsertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
    return;
}
void print_LL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *MergeSorted_LL(Node *&head1, Node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    Node *temp = NULL;
    Node *head_1 = NULL;
    Node *curr = NULL;
    Node *prev = NULL;
    Node *nextNode = NULL;
    if (head1->data > head2->data)
    {
        temp = head1;
        curr = head2->next;
        prev = head2;
        head_1 = head2;
    }
    else
    {
        temp = head2;
        curr = head1->next;
        prev = head1;
        head_1 = head1;
    }
    while (temp != NULL)
    {
        Node *nextNode = NULL;
        if (curr != NULL)
        {
            if (temp->data >= prev->data && temp->data <= curr->data)
            {
                nextNode = temp->next;
                temp->next = curr;
                prev->next = temp;
                prev = temp;
                temp = nextNode;
                // curr=curr->next;
                // prev=curr;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
        else
        {
            prev->next = temp;
            break;
        }
    }
    print_LL(head_1);
    return head_1;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    InsertAtTail(head1, tail1, 1);
    InsertAtTail(head1, tail1, 4);
    InsertAtTail(head1, tail1, 5);
    InsertAtTail(head2, tail2, 2);
    InsertAtTail(head2, tail2, 7);
    InsertAtTail(head2, tail2, 8);
    print_LL(head1);
    print_LL(head2);
    MergeSorted_LL(head1, head2);

}
*/

/*
// PALINDROME LINKED LIST
#include <iostream>
#include <vector>
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
void InsertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
    return;
}
void print_LL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
Node *reverse_LL(Node *&head)
{
    Node *prevNode = NULL;
    Node *currNode = head;
    Node *nextNode = NULL;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    while (currNode != NULL)
    {
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    head = prevNode;
    return head;
}
bool isPalindrome(Node *head)
{
    int len = getLength(head);
    if (head == NULL || head->next == NULL)
    {
        return 1;
    }
    Node *head2 = head;
    Node *head1 = head;
    Node *prevNode = NULL;
    if (len % 2 == 0)
    {
        for (int i = 0; i < (len + 1) / 2; i++)
        {
            prevNode = head2;
            head2 = head2->next;
        }
        prevNode->next = NULL;
        Node *temp = reverse_LL(head2);
        while (temp != NULL && head1 != NULL)
        {
            if (head1->data != temp->data)
            {
                return 0;
            }
            head1 = head1->next;
            temp = temp->next;
        }
        return 1;
    }
    else if (len % 2 != 0)
    {
        for (int i = 0; i <= (len / 2); i++)
        {
            prevNode = head2;
            head2 = head2->next;
        }
        prevNode->next = NULL;
        Node *temp = reverse_LL(head2);
        while (temp != NULL)
        {
            if (head1->data != temp->data)
            {
                return 0;
            }
            head1 = head1->next;
            temp = temp->next;
        }
        return 1;
    }
    return 0;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    InsertAtTail(head, tail, 1);
    InsertAtTail(head, tail, 2);
    InsertAtTail(head, tail, 2);
    InsertAtTail(head, tail, 1);
    int a = isPalindrome(head);
    cout << a << endl;
}
*/
