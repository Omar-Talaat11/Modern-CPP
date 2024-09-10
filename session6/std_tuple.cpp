#include <iostream>
#include <tuple>




int main()
{
    std::tuple<int,std::string,double> myTuple = {1,"Omar",2.2};

    //get values
    std::cout<<std::get<0>(myTuple)<<std::endl;
    std::cout<<std::get<1>(myTuple)<<std::endl;
    std::cout<<std::get<2>(myTuple)<<std::endl;

    //modify values
    std::get<0>(myTuple) = 3;
    std::get<1>(myTuple) = "Talaat";
    std::get<2>(myTuple) = 6.5;
    std::cout<<std::get<0>(myTuple)<<std::endl;
    std::cout<<std::get<1>(myTuple)<<std::endl;
    std::cout<<std::get<2>(myTuple)<<std::endl;

    //size
    std::cout<<std::tuple_size<decltype(myTuple)>::value<<std::endl;

    //element types
    std::tuple_element<0,decltype(myTuple)>::type element1;
    std::tuple_element<1,decltype(myTuple)>::type element2;
    std::tuple_element<2,decltype(myTuple)>::type element3;
    std::cout<<typeid(element1).name()<<" "<<typeid(element2).name()<<" "<<typeid(element3).name()<<std::endl;
}