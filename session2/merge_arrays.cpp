#include <iostream>
#include <algorithm>



int* merge_arrays(int *arr1,int size1,int *arr2,int size2)
{
    int i = 0;
    int* mergedArray = new int[size1+size2];

    std::for_each(arr1,arr1+size1,[&](int a)
    {
        mergedArray[i]=a;
        i++;
    });
    std::for_each(arr2,arr2+size2,[&](int a)
    {
        mergedArray[i]=a;
        i++;
    });
    return mergedArray;
}



int main()
{
    int arr1[]={1,2,3,4,5,7};
    int arr2[]={9,8,7,6,5,0};

    int* newArr = merge_arrays(arr1,sizeof(arr1)/sizeof(arr1[0]),arr2,sizeof(arr2)/sizeof(arr2[0]));

    std::for_each(newArr,newArr+sizeof(arr1)/sizeof(arr1[0])+sizeof(arr2)/sizeof(arr2[0]),[](int a)
    {
        std::cout<<a<<" ";
    });
    std::cout<<std::endl;

    delete newArr;

}