#include <iostream>
#include <cstring>


class LOG
{

    
    char notify = 0;
    char warn = 1;
    char error = 2;

    private:
    static char *LogMessages[30];
    static int LogLevels[30];
    static int LogNumber;

    
    public:
    LOG()=default;

    void Dump()
    {
        if(LogNumber==0)
        {
            std::cout<<"No Log Messages are saved"<<std::endl;
            return;
        }
        for(int i =0;i<LogNumber;i++)
        {
            std::cout<<i+1<<" - Level: ";
            switch(LogLevels[i])
            {
                case NOTIFY:
                std::cout<<"Notify";
                break;
                case WARN:
                std::cout<<"Warn";
                break;
                case ERROR:
                std::cout<<"Error";
                break;
            }
            std::cout<<" - Messages: "<<LogMessages[i]<<std::endl;
        }
    }

    void Clear()
    {
        for(int i =0;i<LogNumber;i++)
        {
            LogLevels[i]=0;
            delete LogMessages[i];
            LogMessages[i] = nullptr;
        }
        LogNumber=0;
        std::cout<<"Logs are Cleared"<<std::endl;
    }

    enum LogLevel
    {
        NOTIFY = 0,
        WARN = 1,
        ERROR = 2
    };

    void operator<<(const char*msg)
    {
        if(LogNumber==30) return;
        char* ptr = new char(std::strlen(msg));
        std::strcpy(ptr,msg);
        LogMessages[LogNumber] = ptr;
        LogNumber++;
        // std::cout<<"Saved Message: "<<ptr<<std::endl;
    }
    
    static void Level(const char level)
    {
        if(LogNumber==30) return;
        LogLevels[LogNumber]=level;
    }
};
char* LOG::LogMessages[30]={0};
int LOG::LogLevels[30]={0};
int LOG::LogNumber = 0;


void f()
{
    LOG newLog;
    newLog.Level(LOG::NOTIFY);
    newLog<<"Function is Entered";
}

int main()
{
    LOG myLog;
    myLog.Level(LOG::WARN);
    myLog<<"forget to close file";
    myLog.Level(LOG::WARN);
    myLog<<"forget to close file"; 
    myLog.Clear();
    myLog.Level(LOG::ERROR);
    myLog<<"code is crashing"; 
    f();
    myLog.Dump();
}