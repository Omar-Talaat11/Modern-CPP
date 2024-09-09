#include <iostream>
#include <sstream>

void get_line_user()
{
    std::cout<<"Please Enter a Line with no delimeter"<<std::endl;
    
    std::string s;
    std::getline(std::cin,s);
    std::cout<<"You Entered:"<<std::endl<<s<<std::endl;
    std::cout<<"Please Enter a Line with '0' as delimeter"<<std::endl;

    std::getline(std::cin,s,'0');
    std::cout<<"You Entered:"<<std::endl<<s<<std::endl;
}

void get_line_stringstream()
{
    std::stringstream ss("Egypt,Cairo,Africa");

    std::string word;
    bool flag;
    while(std::getline(ss,word,','))
    {
        std::cout<<word<<std::endl;
    }

}

int main()
{

    get_line_stringstream();
}