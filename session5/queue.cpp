#include <iostream>
#include <queue>


int main()
{
    std::queue<int> myQueue;

    myQueue.push(5);
    myQueue.push(4);
    myQueue.push(3);
    myQueue.push(2);
    myQueue.push(1);

    while(myQueue.empty()==0)
    {
        std::cout<<myQueue.front()<<std::endl;
        myQueue.pop();
    }
}