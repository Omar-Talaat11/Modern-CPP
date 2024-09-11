#include <iostream>
#include <fstream>

int main()
{
    std::fstream file1("logs.txt",std::ios::out);
    if(file1.is_open())
    {
        std::cout<<"File is opened successfully"<<std::endl;
    }
    else    
    {
        std::cout<<"File failed to open"<<std::endl;
    }

    file1<<"Hello world!\n";
    file1.flush();
    file1.write("My name is Omar Talaat",22);


    file1.close();
    if(!file1.is_open())
    {
        std::cout<<"File is closed successfully"<<std::endl;
    }
    else    
    {
        std::cout<<"File failed to close"<<std::endl;
    }
    
}