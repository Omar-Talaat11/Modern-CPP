#include <iostream>
#include <algorithm>
#include <vector>




int main()
{
    std::vector<int> vec1 = {3,4,5,6,7};
    std::vector<int> vec2 = {3,4,5,6,7,3 ,3 ,8,9};
    std::vector<int> vec3 = {3,4,5,6,7,3 ,5 ,15,9};

    //All of them
    std::cout<<std::all_of(vec1.begin(),vec1.end(),[](int a){return a<8;})<<std::endl;

    //Any of them
    std::cout<<std::any_of(vec1.begin(),vec1.end(),[](int a){return a==3;})<<std::endl;

    //None of them
    std::cout<<std::none_of(vec1.begin(),vec1.end(),[](int a){return a>8;})<<std::endl;

    //For Each
    std::for_each(vec1.begin(),vec1.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    //count
    std::cout<<std::count(vec2.begin(),vec2.end(),3)<<std::endl;

    //count if
    std::cout<<std::count_if(vec2.begin(),vec2.end(),[](int a){return a%2;})<<std::endl;

    //mismatch
    auto it = std::mismatch(vec2.begin(),vec2.end(),vec3.begin(),vec3.end());
    std::cout<<*it.first<<" "<<*it.second<<std::endl;

    //mismatch with lambda expression
    it = std::mismatch(vec2.begin(),vec2.end(),vec3.begin(),vec3.end(),[](int a,int b){return a>=b-2;});
    std::cout<<*it.first<<" "<<*it.second<<std::endl;

    //find methods
    std::cout<<*std::find(vec2.begin(),vec2.end(),7)<<std::endl;
    std::cout<<*std::find_if(vec2.begin(),vec2.end(),[](int a){return a>7;})<<std::endl;
    std::cout<<*std::find_if_not(vec2.begin(),vec2.end(),[](int a){return a<8;})<<std::endl;
    std::cout<<*std::find_first_of(vec2.begin(),vec2.end(),vec1.begin(),vec1.end())<<std::endl;
    std::cout<<*std::adjacent_find(vec2.begin(),vec2.end())<<std::endl;
    auto it2=std::search(vec2.begin(),vec2.end(),vec1.begin(),vec1.end());

    //copy_if
    std::vector<int> copy_vec(vec1.size());
    std::copy_if(vec1.begin(),vec1.end(),copy_vec.begin(),[](int a){return a%2==0;});
    std::for_each(copy_vec.begin(),copy_vec.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    //copy_n
    std::vector<int> copy_vec_n(3);
    std::copy_n(vec1.begin(),3,copy_vec_n.begin());
    std::for_each(copy_vec_n.begin(),copy_vec_n.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    //move
    std::vector<int> move_vec(copy_vec_n.size());
    std::move(copy_vec_n.begin(),copy_vec_n.end(),move_vec.begin());
    std::for_each(move_vec.begin(),move_vec.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    //fill
    std::fill(move_vec.begin(),move_vec.end(),0);
    std::for_each(move_vec.begin(),move_vec.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    //fill_n
    std::fill_n(move_vec.begin(),2,7);
    std::for_each(move_vec.begin(),move_vec.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    //move
    std::vector<int> transform_vec(vec1.size());
    std::transform(vec1.begin(),vec1.end(),transform_vec.begin(),[](int a){return a+2;});
    std::for_each(transform_vec.begin(),transform_vec.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    //generate
    std::vector<int> generate_vec(5);
    int x = 5;
    std::generate(generate_vec.begin(),generate_vec.end(),[&x](){return x--;});
    std::for_each(generate_vec.begin(),generate_vec.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    //remove_if
    auto it3 = std::remove(copy_vec.begin(),copy_vec.end(),0);
    copy_vec.resize(std::distance(copy_vec.begin(),it3));
    std::for_each(copy_vec.begin(),copy_vec.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    copy_vec.insert(copy_vec.end(),{2,2,2,2,2});
    std::for_each(copy_vec.begin(),copy_vec.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    //replace
    std::replace(copy_vec.begin(),copy_vec.end(),2,7);
    std::for_each(copy_vec.begin(),copy_vec.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    //unique
    auto it4 = std::unique(copy_vec.begin(),copy_vec.end());
    copy_vec.resize(std::distance(copy_vec.begin(),it4));
    std::for_each(copy_vec.begin(),copy_vec.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    //sort
    std::sort(vec3.begin(),vec3.end());
    std::for_each(vec3.begin(),vec3.end(),[](int &a){std::cout<<a<<"  ";});std::cout<<std::endl;

    //binary search
    std::cout<<std::binary_search(vec3.begin(),vec3.end(),7)<<std::endl;

    //lower bound
    std::cout<<*std::lower_bound(vec3.begin(),vec3.end(),7)<<std::endl;
    
    //upper bound
    std::cout<<*std::upper_bound(vec3.begin(),vec3.end(),7)<<std::endl;
    

}