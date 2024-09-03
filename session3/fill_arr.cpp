#include <iostream>
#include <algorithm>




int main()
{
    int i = 10;
    int arr[10000-9];
    std::for_each(std::begin(arr),std::end(arr),[&i](int &a)
    {
        a=i;
        i++;
    });
    std::for_each(std::begin(arr),std::end(arr),[&i](int &a)
    {
        std::cout<<a<<std::endl;
    });
}