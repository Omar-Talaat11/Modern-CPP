#include <iostream>

class customErrors:public std::exception
{
    private:
    std::string error_message;
    public:
    customErrors(const std::string&error):error_message(error){}
    const char *what()const noexcept override{return error_message.c_str();}
};


class someClass
{
    private:
    int a;
    int b;
    public:
    someClass(const int &a,const int&b):a(a),b(b)
    {
        if(a==0)throw std::invalid_argument("Invalid Argument a to someClass");
        if(b==0)throw std::invalid_argument("Invalid Argument b to someClass");
    }
};


void fun2()
{
    try{
    someClass(1,0);
    }
    catch(std::exception const &e)
    {
        std::cout<<e.what()<<" Error Captured in "<<__FUNCTION__<<std::endl;
        throw;
    }
}

void fun1()
{
    
    try{
    fun2();
    }
    catch(std::exception const &e)
    {
        std::cout<<e.what()<<" Error Captured in "<<__FUNCTION__<<std::endl;
        throw;
    }
}

void init_1()
{
    // throw (customErrors("Init 1 Error"));
}

void init_2()
{
    throw (customErrors("Init 2 Error"));
}

void error_handle()
{
    try{throw;}
    catch(customErrors const &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}

int main()
{
    try
    {
        fun1();
        // throw std::domain_error{"Domain Error Captured"};     
    }
    catch(std::invalid_argument const& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(std::exception const&e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        init_1();
        init_2();
    }
    catch(...)
    {
        error_handle();
    }
    
}