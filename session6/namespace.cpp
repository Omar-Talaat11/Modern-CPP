#include <iostream>



namespace myNS
{
    void print()
    {
        std::cout<<"Print from name space myNS"<<std::endl;
    }

    namespace nested_myNS
    {
        void print()
        {
            std::cout<<"Print from nested name space inside myNS"<<std::endl;
        }
    }
}

void print()
{
    std::cout<<"Print from outside name space myNS"<<std::endl;
}

int main()
{
    print();
    myNS::print();

    namespace nmyNS = myNS::nested_myNS;

    nmyNS::print();
}