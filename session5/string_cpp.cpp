#include <iostream>
#include <string>

void constructors()
{
    //1-Construct with C-Style String
    const char * cstr="Hello World!";
    std::string str1(cstr);
    std::cout<<str1<<std::endl;

    //2-Construct with substr of C-Style String
    std::string str2(cstr,5);
    std::cout<<str2<<std::endl;

    //3-Construct with a character with repitition
    std::string str3(5,'a');
    std::cout<<str3<<std::endl;

    //4-Construct with substr of another string
    std::string str4(str1,6,5);
    std::cout<<str4<<std::endl;

    //5-Construct with an iterator and range
    std::string str5(str1.begin(),str1.end()-6);
    std::cout<<str5<<std::endl;

    //6-Construct with an initializer list
    std::string str6{'H','E','L','L','O'};
    std::cout<<str6<<std::endl;

    //7-Construct with substr of another string uing position only
    std::string str7(str1,6);
    std::cout<<str7<<std::endl;

    //8-Copy Constructor
    std::string str8(str1);
    std::cout<<str8<<std::endl;
    
    //9-Copy Constructor
    std::string str9(std::move(str1));
    std::cout<<str9<<std::endl;

}

void methods()
{
    std::string str = "Hello, World!!";

    //Accessing single character
    char firstChar = str[0];
    char lastChar = str[str.length()-1];
    std::cout<<firstChar<<" "<<lastChar<<std::endl;

    //Modifing
    str+=", Omar";
    std::cout<<str<<std::endl;
    str.append(" <3");
    std::cout<<str<<std::endl;

    //Finding substr
    size_t found =str.find(", Omar");
    if(found!=std::string::npos)
    {
        std::cout<<"Found at Index "<<found<<std::endl;
    }

    //Replacing String
    str.replace(found,6,"");
    std::cout<<str<<std::endl;

    //Removing Characters
    str.erase(14,3);
    std::cout<<str<<std::endl;

    //Getting String Length
    std::cout<<str.length()<<std::endl;

    //Check if str is empty
    std::cout<<str.empty()<<std::endl;

    //Converting to C-Style String
    const char* cstr = str.c_str();
    std::cout<<cstr<<std::endl;

    //Getting substr
    std::string substr = str.substr(0,5);
    std::cout<<substr<<std::endl;

    //Inserting Characters
    str.insert(0,"--");
    std::cout<<str<<std::endl;

    //Resize string
    str.resize(7);
    std::cout<<str<<std::endl;

    //Joining strs
    std::string str2 = "Hello " "World" "!!";
    std::cout<<str2<<std::endl;
}

void rawString()
{
    std::string str = R"(my name is omar)";
    char arr[]= R""(raw string)"";
    std::cout<<str<<std::endl;
    std::cout<<arr<<std::endl;
}

int main()
{
    /* Call One Of Functions */
}