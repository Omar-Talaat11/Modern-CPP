#include <iostream>


bool check_if_digit(char&c)
{
    int i = c-'0';
    if(i>=0&&i<=9) return true;
    return false;
}

int main()
{
    char c1('a');
    char c2('3');

    std::cout<<check_if_digit(c1)<<std::endl;
    std::cout<<check_if_digit(c2)<<std::endl;
}