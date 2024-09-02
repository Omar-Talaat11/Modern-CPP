#include <iostream>
#include <bitset>



int main()
{
    int c;
    std::cout<<"Enter a decimal number: ";
    std::cin>>c;

    std::bitset<8> bset(c);

    std::cout<<"Binary Representaion "<<bset<<std::endl;

    std::string o;
    std::cout<<"Enter a Binary number: ";
    std::cin>>o;

    std::bitset<8> bset2(o);

    std::cout<<"Decimal Representaion "<<bset2.to_ulong()<<std::endl;
}