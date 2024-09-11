#include <future>
#include <iostream>



int caluclateSum(int x,int y)
{
    return x+y;
}



int main()
{

    std::future<int> futureObj = std::async(caluclateSum,2,3);

    int sum = futureObj.get();
    std::cout<<"Sum: "<<sum<<std::endl;


}