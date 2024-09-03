#include <iostream>
#include <cstring>
#include <algorithm>



class BackTrace
{
    public:
    BackTrace(const char*name)
    {
        std::cout<<"Enter "<< name<<std::endl;
        char * ptr= new char[sizeof(*name)];
        std::strcpy(ptr,name);
        names[num_of_calls]=ptr;
        num_of_calls++;
    }
    ~BackTrace()
    {
        num_of_calls--;
        std::cout<<"Exit "<< names[num_of_calls]<<std::endl;
        std::strcpy(names[num_of_calls],"");

    }
    void printBackTrace(void)
    {
        int i = 0;
        std::for_each(std::begin(names),std::end(names),[&i](char* a)
        {
            if(a!=0)
            {
                std::cout<<i+1<<" - "<<names[i]<<std::endl;
                i++;
            }
        });
    }
    private:
    static const int MAX_CALLS = 5;
    static int num_of_calls;
    static char* names[MAX_CALLS];

};

int BackTrace::num_of_calls=0;
char *BackTrace::names[BackTrace::MAX_CALLS]={0};

void fun3(void)
{
    BackTrace B3{"Function 3"};
    B3.printBackTrace();
}

void fun2(void)
{
    BackTrace B2{"Function 2"};
    fun3();
}

void fun1(void)
{
    BackTrace B{"Function 1"};
    fun2();
}




int main()
{
    fun1();
}