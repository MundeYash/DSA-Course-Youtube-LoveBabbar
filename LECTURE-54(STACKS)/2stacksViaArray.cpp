// Homework to done upto 1 day  (24 January 2024 )
#include <bits/stdc++.h>
using namespace std;

class Stack
{

public:
    int *arr;
    int top1;
    int top2;
    int size;
    int size1; 
    
    int size2;

    // default constructor
    Stack(int n)
    {
        size = n;
        arr = new int[size];
        top1 = -1;
        top2 = size;
        size1 = 0;
        size2 = 0;
    }

    // Push for adding element in stack1 ;
    void push1(int value)
    {
        if (top1 >= -1 and top1 <= top2 - 1)
        {
            top1++;
            arr[top1] = value;
            size1++;
        }
        return;
    }

    // Push for adding element in the stack2
    void push2(int value)
    {
        if (top2 - 1 > top1 and top2 <= size)
        {
            top2--;
            arr[top2] = value;
            size2++;
        }

        return;
    }

    // POP Operations

    // function for poping the element form the stack1
    void pop1()
    {
        if (top1 > -1 and top1 < top2)
        {
            top1--;
            size1--;
        }
        return;
    }

    // function for poping the element from the stack2
    void pop2()
    {
        if (top2 > top1 and top2 < size)
        {
            top2++;
            size2--;
        }
        return;
    }

    // TOP operation

    // function for getting the top element of stack1
    int topElement1()
    {
        int ans = -1;
        if (top1 > -1 and top1 < top2)
        {

            ans = arr[top1];
            // top1--;
            // no removal element in the top
        }
        return ans;
    }

    // function for getting the top element of the stack2
    int topElement2()
    {
        int ans = -1;
        if (top2 > top1 and top2 < size)
        {
            ans = arr[top2];
            // top2--;
        }

        return ans;
    }

    // Empty function
    bool isempty()
    {
        if (top1 <= -1 and top2 >= size)
            return true;
        return false;
    }

    // function for checking whether the first stack1 is empty or not
    bool isempty1()
    {
        if (top1 <= -1)
            return true;
        return false;
    }

    // function for checking whether the second stack2 is empty or not
    bool isempty2()
    {
        if (top2 >= size)
        {
            return true;
        }
        return false;
    }

    // Size operation
    // function for finding the number of elements in the stack1
    int giveSize1()
    {
        return size1;
    }

    // function for finding the number of elements in the stack2
    int giveSize2()
    {
        return size2;
    }
};

int main()
{
    Stack s(15);
    s.push1(10);
    s.push2(20);
    cout << s.topElement1() << endl;

    for (int i = 0; i < 5; i++)
    {
        s.push1(i);
        s.push2(i + 10);
    }
    cout << s.topElement1() << endl;

    // pop operation

    // printing
    while (!s.isempty1())
    {
        cout << s.topElement1() << " ->";
        s.pop1();
    }

    cout << endl;
    ;
    // printing
    while (!s.isempty2())
    {
        cout << s.topElement2() << " ->";
        s.pop2();
    }

    s.push1(100);
    s.push2(20);
    cout << "The stack1 is empty or not " << s.isempty1() << endl;
    cout << "The stack2 is empty or not " << s.isempty2() << endl;

    cout << "The number of elements in the stack 1 : " << s.giveSize1() << endl;
    cout << "The number of elements in the stack 2 : " << s.giveSize2() << endl;
    return 0;
}

/*
Links :
Codestudio : https://www.codingninjas.com/studio/problems/two-stacks_983634?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTabValue=PROBLEM(done)
gfg  : https://www.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article              (done)
*/