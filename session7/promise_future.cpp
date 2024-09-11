#include <future>
#include <iostream>
#include <thread>



int caluclateSum(int x,int y)
{
    return x+y;
}



int main()
{
    std::promise<int> promiseObj;
    std::future<int> futureObj = promiseObj.get_future();

    std::thread t([&promiseObj](int x,int y)
    {
        int result = caluclateSum(x,y);
        promiseObj.set_value(result);
    },2,3);


    int sum = futureObj.get();
    std::cout<<"Sum: "<<sum<<std::endl;

    t.join();

}