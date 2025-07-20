// Homework to done upto 1 day(24 January 2024 )


// Implementation of stack using the arary 

#include<bits/stdc++.h> 
using namespace std ; 
class Stack{
    public : 
        int *arr ; 
        int top ; 
        int size ; 

        // default constructor 

        Stack(int n){
          
            top =-1 ; 
            size = n ;
            arr = new int[size]; 

        }



        // function for pushing elements in to the stack (PUSH function )
        void push(int data ){
            
            if (top>=-1 and top<=size-2){
                top++ ;
                arr[top] = data ;

            }
            
        }

        // function for pop out the element from the stack 

        int pop(){
            int ans =-1 ; 
            if (top>=0 and top<=(size-1)){
                // poping oepration is possible 
                ans = arr[top]; 
                top--;
            }
            return ans;
        }

        // function for checking whether the stack is empty or not 
        bool isempty(){
            if (top<=-1 ){
                return true ;
            
        }
        return false;
        }

        // function for the getting the top element of the stack 
        int topElement(){
            int ans =-1 ; 
            if (top>=0 and top<=(size-1)){
                ans = arr[top];
            }
            return ans;
        }

};

int main (){
    Stack s(10) ; 
    s.push(10); 
    s.push(120); 
    s.push(8382);

    while(!s.isempty()){
        cout<<s.topElement()<<" ";
        s.pop();
    }
    cout<<endl;

    return  0 ;
}

/*
Links : 
code studio : https://www.codingninjas.com/studio/problems/stack-implementation-using-array_3210209?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf(done)
gfg : https://www.geeksforgeeks.org/problems/implement-stack-using-array/1?ref=header_search (done)

Leetcode : https://leetcode.com/problems/min-stack/         (done) (tricky similiar question )

https://www.geeksforgeeks.org/problems/special-stack/1%20%20%20%20%20%20        (done)

*/