#include <iostream>



int main()
{
    auto fun = [](int x){ return x*x;};
    int n;
    std::cin>>n;
    std::cout<<fun(n)<<std::endl;
}