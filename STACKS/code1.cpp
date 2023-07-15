#include<iostream>
using namespace std;

class Stack
{
    int top;
    int *arr;
    int size;

    public:
    Stack(int s)
    {
    arr=new int[s];
    top=-1;
    size=s;
    };

    // Push element in stack
    void push(int data)
    {
        if(top==size-1)
        {
            cout<<"Stack Overflow\n";
            return;
        }
        top++;
        arr[top]=data;
    };

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow\n";
            return;
        }

        top--;
        return;
    };

    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow";
            return -1;
           
        }
        return arr[top];
    };
                               
    bool empty()                        //If stack is empty(top==-1) it will 
                                        //return 1 or else it will return 0 
    {
        return top==-1;
    }
};

int main()
{
    Stack s(4);
    s.push(4);
    s.push(4321);
    s.push(14);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    return 0;
    
}
