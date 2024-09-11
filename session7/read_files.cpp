#include <array>
#include <iostream>
#include <fstream>

int main()
{
    std::fstream file1("logs.txt",std::ios::in);
    if(file1.is_open())
    {
        std::cout<<"File is opened successfully"<<std::endl;
    }
    else    
    {
        std::cout<<"File failed to open"<<std::endl;
    }
    
    std::cout<<"File contains the following data:"<<std::endl;
    std::cout<<file1.rdbuf()<<std::endl;

    file1.seekg(0);
    std::cout<<"Cursor is at position: "<<file1.tellg()<<std::endl;

    std::array<char, 20> arr;
    while(!file1.eof())
    {
        file1.getline(arr.data(),15);
        std::cout<<"line of data: "<<arr.data()<<std::endl;
    }

    file1.seekg(0);
    std::cout<<"Cursor is at position: "<<file1.tellg()<<std::endl;

    std::string word;

    while(file1>>word)
    {
        std::cout<<word<<" ";
        if(word == "data")std::cout<<std::endl;
    }


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