#include <iostream>
#include <cstring>

class String
{
private:
    char* str;
    int size;

public:
    String():str(nullptr),size(0){std::cout<<"Default Constructor"<<std::endl;}
    String(char*str)
    {
        std::cout<<"Param Constructor"<<std::endl;
        this->str = new char(std::strlen(str));
        std::strcpy(this->str,str);
        this->size = std::strlen(str);
    }
    ~String()
    {
        if(this->str)delete[] this->str;
    }

    String(const String&old_S) //Copy Constructor
    {
        std::cout<<"Copy Constructor"<<std::endl;
        this->str = new char(std::strlen(old_S.str));
        std::strcpy(this->str,old_S.str);
        this->size = old_S.size;
    }

    String(String&&old_S) //Move Constructor
    {
        std::cout<<"Move Constructor"<<std::endl;
        this->str = old_S.str;
        this->size = old_S.size;
        old_S.str=nullptr;
        old_S.size=0;
    }

    String& operator=(const String&copy) //Copy Operator
    {
        std::cout<<"Copy Operator"<<std::endl;
        
        if(&copy==this) return *this;
        
        this->size=copy.size;

        if(this->str) delete[] this->str;

        this->str = new char(copy.size+1);
        std::strcpy(this->str,copy.str);

        return *this;
    }

    String& operator=(String&&move) //Move Operator
    {
        std::cout<<"Move Operator"<<std::endl;
        if(&move==this) return *this;

        this->size=move.size;

        if(this->str) delete[] this->str;

        this->str=move.str;
        move.size = 0;
        move.str=nullptr;

        return *this;
    }

    void print()
    {
        std::cout<<str<<std::endl;
    }
    void set1stchar(char c)
    {
        this->str[0]=c;
    }

};


String myFun()
{
    char arr[]="New String";
    String result(arr);
    return result;
}

int main()
{
    char arr[]= "Hello World";

    String s1{arr};

    String s2;

    s2 = std::move(s1);


    s2.print();
}