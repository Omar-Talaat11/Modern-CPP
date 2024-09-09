#include <iostream>
#include <array>





int main()
{
    //Declatring array
    std::array<int,5> arr = {1,2,3,4,5};

    //accessing using [ ] operator
    std::cout<<arr[2]<<std::endl;

    //accessing using at method
    std::cout<<arr.at(2)<<std::endl;

    //size and max size (same in array)
    std::cout<<arr.size()<<"  "<<arr.max_size()<<std::endl;

    //first and last elements
    std::cout<<arr.front()<<"  "<<arr.back()<<std::endl;

    //iterate through the array
    for(auto it:arr){std::cout<<it<<"  ";}
    std::cout<<std::endl;

    //fill the array with a value
    arr.fill(0);
    for(auto it:arr){std::cout<<it<<"  ";}
    std::cout<<std::endl;

    //check if array is empty
    std::cout<<arr.empty()<<std::endl;

    //nested array
    std::array<std::array<int,3>,5> arr2 = {{
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15}
    }};

    for(auto it:arr2)    for(auto it2:it)    {std::cout<<it2<<"  ";}
    std::cout<<std::endl;
}