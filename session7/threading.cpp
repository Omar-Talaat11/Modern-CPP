#include <iostream>
#include <thread>

//1-Thread with Join
void fun1(){std::cout<<"Function 1 is being excuted"<<std::endl;}

//2-Thread with Detach
void fun2()
{
    std::cout<<"Function 2 is being excuted"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout<<"Function 2 is finished"<<std::endl;
}

//3-Thread with argument
void fun3(int x)
{
    std::cout<<"Function 3 started with argument: "<<x<<std::endl;
}

//5-Thread with class functor callable
class myFunctor
{
public:
    void operator()(int num){std::cout<<"Functor is being excuted with argument: "<<num<<std::endl;}
};



int main()
{
    //1-Thread with Join
    std::thread t1(fun1);
    t1.join();

    //2-Thread with Detach
    std::thread t2(fun2);
    t2.detach();

    //3-Thread with argument
    std::thread t3(fun3,3);
    t3.join();

    //4-Thread with lamda expression callable
    std::thread t4(
        [](int num){std::cout<<"Lamda Expression with argyment: "<<num<<std::endl;},5
    );
    t4.join();

    //5-Thread with class functor callable
    std::thread t5(myFunctor(),11);
    t5.join();

    //6-Sleep for 2 seconds
    std::cout<<"Main is sleepin for 2 seconds"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    //7-Sleep until 2 seconds passed
    std::cout<<"Main is sleepin until 2 seconds passed"<<std::endl;
    std::this_thread::sleep_until(std::chrono::system_clock::now()+std::chrono::seconds(2));


    std::cout<<"Main is finished"<<std::endl;
    while(1);

}