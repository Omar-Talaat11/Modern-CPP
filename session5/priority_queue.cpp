#include <iostream>
#include <queue>


int main()
{

    std::priority_queue<int> myQueue;

    myQueue.push(5);
    myQueue.push(4);
    myQueue.push(3);
    myQueue.push(1);
    myQueue.push(2);
    

    while(myQueue.empty()==0)
    {
        std::cout<<myQueue.top()<<std::endl;
        myQueue.pop();
    }
}