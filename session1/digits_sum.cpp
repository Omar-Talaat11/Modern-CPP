#include <iostream>
#include <algorithm>



int main()
{
    int c;
    std::cout<<"Please Enter the number"<<std::endl;
    std::cin>>c;

    int sum=0;
    while(c!=0)
    {
        sum += c%10;
        c=c/10;
    }
    std::cout<<"The Sum is "<<sum<<std::endl;

}