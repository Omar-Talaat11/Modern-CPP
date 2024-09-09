#include <iostream>
#include <iterator>
#include <vector>

void print_vector(std::vector<int>&v)
{
    for(auto it:v)std::cout<<it<<" ";
    std::cout<<std::endl;
}
void constructors()
{
    //1-Default empty vector 
    std::vector<int> v1;
    print_vector(v1);

    //2-Default empty vector with size
    std::vector<int> v2(5);
    print_vector(v2);

    //3-Construct with repitition of a value
    std::vector<int> v3(2,5);
    print_vector(v3);

    //4-Construct from another vector/array
    std::vector<int> v4(v3.begin(),v3.end());
    print_vector(v4);

    //5-Copy Constructor
    std::vector<int> v5(v2);
    print_vector(v5);

    //6-Move Constructor
    std::vector<int> v6(std::move(v3));
    print_vector(v6);

    //7-Construct with Initializer List
    std::vector<int> v7{1,2,3,4,5};
    print_vector(v7);
}

void methods()
{
    std::vector<int> vec={1,2,3,4,5};

    //accessing using [] operator
    std::cout<<vec[2]<<std::endl;

    //accessing using at operator
    std::cout<<vec.at(2)<<std::endl;

    //size and max size
    std::cout<<vec.size()<<std::endl;
    std::cout<<vec.max_size()<<std::endl;

    //first and last elements
    std::cout<<vec.front()<<std::endl;
    std::cout<<vec.back()<<std::endl;

    //iterating through vector
    for(auto it:vec)std::cout<<it<<" ";
    std::cout<<std::endl;

    //assign from one vector to another
    std::vector<int> vec2=vec;
    print_vector(vec2);

    //assign same value multiple times
    vec2.assign(8,5);
    print_vector(vec2);

    //reverse iterators
    auto i = std::rbegin(vec);
    auto e = std::rend(vec);
    std::cout<<*i<<"  "<<*(e-1)<<std::endl;

    //Difference between size and capacity
    std::cout<<"Size: "<<vec.size()<<"  Capacity: "<<vec.capacity()<<std::endl;
    vec.push_back(0);
    std::cout<<"Size: "<<vec.size()<<"  Capacity: "<<vec.capacity()<<std::endl;
}

int main()
{   

}