#include <future>
#include <iostream>
#include <thread>



int caluclateSum(int x,int y)
{
    return x+y;
}



int main()
{
    std::packaged_task<int(int,int)> task(caluclateSum);
    std::future<int> futureObj = task.get_future();

    std::thread t(std::move(task),2,3);


    int sum = futureObj.get();
    std::cout<<"Sum: "<<sum<<std::endl;

    t.join();

}