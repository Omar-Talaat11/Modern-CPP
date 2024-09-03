#include <iostream>
#include <algorithm>



void even_odd_array(int *arr1,int size1)
{
    int i = 0;

    std::for_each(arr1,arr1+size1,[&](int a)
    {
        if(a%2)
        {
            std::cout<<"Number "<<a<<" at Index "<<i<<" is Odd"<<std::endl;
        }
        else
        {
            std::cout<<"Number "<<a<<" at Index "<<i<<" is Even"<<std::endl;
        }
        i++;
    });

}



int main()
{
    int arr1[]={1,2,6,4,5,7};

    even_odd_array(arr1,sizeof(arr1)/sizeof(arr1[0]));

}