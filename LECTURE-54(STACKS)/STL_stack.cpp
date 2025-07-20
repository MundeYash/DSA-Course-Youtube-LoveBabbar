// Homework to done upto 1 day  (24 January 2024 )
// Stack basic using in the c++ using the sTL

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;
    st.push(2);
    st.push(3);
    st.pop();

    cout << st.top() << endl;
    st.pop();

    cout << ((st.empty()) ? "empty stack" : "stack has some elements ") << endl;
    return 0;
}