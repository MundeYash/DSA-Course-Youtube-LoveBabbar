#include <bits/stdc++.h>
using namespace std;

// implementing the stack class via the vector
class Stack
{

public:
    // 3 important attributes
    int topIndex;
    int size;
    vector<int> arr;

    // constructor call for intialization of values

    Stack(int n)
    {
        this->size = n;
        this->topIndex = -1;
        arr = vector<int>(size); // set the array size to n
    }

    // important operations of stack

    void push(int value)
    {
        if (topIndex >= -1 && topIndex < size - 1)
        {
            topIndex++;
            arr[topIndex] = value;
        }
        else
        {
            cout << "Stack is Overflow" << endl;
        }
    }

    void pop()
    {
        if (topIndex >= 0)
        {
            topIndex--;
        }
        else
        {
            cout << "Stack is underflow" << endl;
        }
    }

    int top()
    {
        if (topIndex >= 0)
        {
            return arr[topIndex];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool empty()
    {
        return topIndex == -1;
    }
};
int main()
{
    Stack s(5);
    s.push(2);
    s.push(3);
    s.push(3);
    s.push(5);
    s.push(5);
    s.push(5);
    cout << s.top() << endl;
    s.pop();
    cout << s.empty() << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}