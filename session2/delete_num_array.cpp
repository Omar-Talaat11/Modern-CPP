#include <iostream>
#include <algorithm>



void search_arr(int (&arr)[8],int num)
{
    int i = 0;
    bool f = false;
    std::for_each(std::begin(arr),std::end(arr),[&](int &a)
    {
        
        if(num==a)
        {
            std::cout<<"Number found at Index "<<i <<" and replaced with 0"<<std::endl;
            a=0;
            f = true;
        }
        i++;
    });
    if(f==true) return;
    std::cout<<"Number Not found"<<std::endl;

}



int main()
{
    int arr[8]={1,2,3,5,10,2,5,22};

    int num;
    std::cin>>num;

    search_arr(arr,num);

    std::for_each(std::begin(arr),std::end(arr),[&](int a)
    {
        std::cout<<a<<std::endl;
    });

}