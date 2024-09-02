#include <iostream>
#include <iomanip>



int main()
{
    int i=0;
    std::cout<<"+------+-------+"<<std::endl<<"| Char | ASCII |"<<std::endl<<"+------+-------+"<<std::endl;
    for(char c=0;c<127;c++)
    {
        std::cout<<"|   "<<std::flush;
        if(c<33)
        {
            printf(" ");
        }
        else
        {
            printf("%c",c);
        }
        std::cout<<"   |   "<<i<<"   |"<<std::endl;
        i++;
    }
}