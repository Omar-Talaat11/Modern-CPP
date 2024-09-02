#include <iostream>
#include <algorithm>


int main()
{
    char vowels[]={'a','e','o','i','u'};
    char c;
    std::cout<<"Please Enter a letter"<<std::endl;
    std::cin>>c;

    auto i = std::find(std::begin(vowels),std::end(vowels),c);
    if(i!=std::end(vowels))
    {
        std::cout<<"You entered the Vowel "<<*i<<std::endl;
    }
    else
    {
        std::cout<<"You didn't enter a vowel "<<std::endl;
    }
    

}