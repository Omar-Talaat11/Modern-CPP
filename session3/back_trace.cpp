#include <iostream>
#include <cstring>
#include <algorithm>

#define EnterFun BackTrace B(__FUNCTION__)
#define ExitFun B.exit(__FUNCTION__)
#define PrintBackTrace BackTrace::printBackTrace()



class BackTrace
{
    public:
    BackTrace(const char*name)
    {
        std::cout<<"Enter "<< name<<std::endl;
        char * ptr= new char[sizeof(*name)+1];
        std::strcpy(ptr,name);
        names[num_of_calls]=ptr;
        num_of_calls++;
    }
    ~BackTrace()
    {
        if (num_of_calls > 0) {
        num_of_calls--;
        delete[] names[num_of_calls];
        names[num_of_calls]=nullptr;
        }

    }
    static void printBackTrace();

    void exit(const char*fun)
    {
        std::cout<<"Exit "<< names[num_of_calls-1]<<std::endl;
    }
    
    private:
    static const int MAX_CALLS = 5;
    static int num_of_calls;
    static char* names[MAX_CALLS];

};

void BackTrace::printBackTrace()
{
        int i = 0;
        std::for_each(std::begin(names),std::end(names),[&i](char* a)
        {
            if(a!=nullptr)
            {
                std::cout<<i+1<<" - "<<names[i]<<std::endl;
                i++;
            }
        });
    }
    
int BackTrace::num_of_calls=0;
char *BackTrace::names[BackTrace::MAX_CALLS]={nullptr};

void Function_4(void)
{
    EnterFun;
    PrintBackTrace;
    ExitFun;
}

void Function_3(void)
{
    EnterFun;

    ExitFun;
}

void Function_2(void)
{
    EnterFun;
    Function_3();
    Function_4();
    ExitFun;
}

void Function_1(void)
{
    EnterFun;
    Function_2();
    ExitFun;
}


int main()
{
    Function_1();
}