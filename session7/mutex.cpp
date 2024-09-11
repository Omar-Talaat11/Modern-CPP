#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int counter = 0;

void updateCounter(void)
{
    mtx.lock();
    std::cout<<"Thread Started"<<std::endl;

    for(int i =0;i<10000;i++)    counter++;

    std::cout<<"Thread Ended"<<std::endl;
    mtx.unlock();
}


int main()
{
    std::thread t1(updateCounter);
    std::thread t2(updateCounter);

    t1.join();
    t2.join();

    std::cout<<"Counter = "<<counter<<std::endl;

}