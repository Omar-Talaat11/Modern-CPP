#include <iostream>
#include <algorithm>



int max_num(int arr[],int size)
{
    auto max_it = std::max_element(arr,arr+size);
    return *max_it;
}



int main()
{
    int arr[]={1,2,3,5,10,2,5,22};

    std::cout<<max_num(arr,(sizeof(arr)/sizeof(arr[0])))<<std::endl;

}