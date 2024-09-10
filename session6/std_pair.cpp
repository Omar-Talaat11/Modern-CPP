#include <iostream>


int main()
{
    std::pair<int,std::string> myPair(11,"Omar");

    //Access
    std::cout<<myPair.first<<" : "<<myPair.second<<std::endl;

    //Modify
    myPair.first = 1;
    myPair.second = "Talaat";
    std::cout<<myPair.first<<" : "<<myPair.second<<std::endl;
}