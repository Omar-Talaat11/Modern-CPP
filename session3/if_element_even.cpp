#include <iostream>
#include <algorithm>

bool if_array_even(int*arr,int s)
{
    bool r=false;
    std::for_each(arr,arr+s,[&r](int a)
    {
        if(!(a%2))r=true;
    });
    return r;
}

int main()
{
    int arr1[]={1,3,5,7,9,11};
    int arr2[]={2,4,6,3,2,12,8};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    std::cout<<if_array_even(arr1,size1)<<std::endl;
    std::cout<<if_array_even(arr2,size2)<<std::endl;
}