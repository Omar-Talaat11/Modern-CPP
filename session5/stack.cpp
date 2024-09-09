#include <iostream>
#include <stack>


int main()
{
    std::stack<int> myStack;

    myStack.push(5);
    myStack.push(4);
    myStack.push(3);
    myStack.push(2);
    myStack.push(1);

    while(myStack.empty()==0)
    {
        std::cout<<myStack.top()<<std::endl;
        myStack.pop();
    }
}