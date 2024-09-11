#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready;

void consumer(void)
{
    std::unique_lock<std::mutex> lock(mtx);
    std::cout<<"Consumer is waiting"<<std::endl;
    cv.wait(lock,[](){return ready;});
    std::cout<<"Consumer started working"<<std::endl;
}

void producer(void)
{
    std::cout<<"Producer is not ready"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::cout<<"Producer is ready"<<std::endl;
    ready=true;
    cv.notify_one();
}


int main()
{
    std::thread t1(consumer);
    std::thread t2(producer);

    t1.join();
    t2.join();


}