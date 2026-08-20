// STACK IMPLEMENTATION USING ARRAYS
#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;
    Stack(int s)
    {
        this->size = s;
        arr = new int[size]; // dynamic allocation
        top = -1;
    }
    void push(int val)
    {
        if ((size - top) >= 1)
        {
            top++;
            arr[top] = val;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            top--;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            cout << arr[top] << endl;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Stack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.peek();
    cout << s1.isEmpty() << endl;
    cout <<s1.top<<endl;
}
