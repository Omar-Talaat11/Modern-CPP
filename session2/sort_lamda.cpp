#include <iostream>
#include <algorithm>


int main() {

    int arr[]={5,2,3,9,1,6,11,4};

    std::sort(std::begin(arr),std::end(arr),[](int a,int b)
    {
        return a<b;
    });

    for(int a:arr)
    {
        std::cout<<a<<std::endl;
    }
}