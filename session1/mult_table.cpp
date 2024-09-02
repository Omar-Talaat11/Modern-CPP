#include <iostream>



int main()
{
    int c;
    std::cout<<"Please Enter the number you want its Multiplication table"<<std::endl;
    std::cin>>c;

    c= int(c);

    for(int i = 0;i<10;i++)
    {
        std::cout<<c<<" * "<<i<<" = "<<c*i<<std::endl;
    }

}