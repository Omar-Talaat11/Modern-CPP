#include <iostream>
#include <csignal>


void handleSignal(int signal) {
    if (signal == SIGINT) {
        std::cout << "\nCaught signal SIGINT (Ctrl+C)." << std::endl;
        std::exit(0); 
    }
}

int main()
{
    std::signal(SIGINT, handleSignal);
    while(1);
}