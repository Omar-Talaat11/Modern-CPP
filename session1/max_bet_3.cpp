#include <iostream>
#include <algorithm>



int main()
{
    int n1,n2,n3;
    std::cout<<"Please Enter 3 Numbers"<<std::endl;
    std::cin>>n1>>n2>>n3;

    int max = std::max({n1,n2,n3});
    
    std::cout<<"Maximum is "<<max<<std::endl;

}