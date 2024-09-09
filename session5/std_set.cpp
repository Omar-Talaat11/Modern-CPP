#include <iostream>
#include <set>
#include <unordered_set>





void orderedSet()
{
    //Construct the Set
    std::set<int> mySet={5,1,2,4,9,0};

    //Print set elements
    for(auto it:mySet) std::cout<<it<<"  ";
    std::cout<<std::endl;

    //Insert Elements
    mySet.insert(3);
    mySet.insert(5);
    mySet.insert(11);
    for(auto it:mySet) std::cout<<it<<"  ";
    std::cout<<std::endl;

    //Erase element
    mySet.erase(0);
    for(auto it:mySet) std::cout<<it<<"  ";
    std::cout<<std::endl;

    //Find Elements
    auto it = mySet.find(5);
    if(it!=mySet.end()) std::cout<<"Found"<<std::endl;
    else                std::cout<<"Not found"<<std::endl;

    //lower bound
    auto it2 = mySet.lower_bound(5);
    std::cout<<*it2<<std::endl;

    //upper bound
    it2 = mySet.upper_bound(10);
    std::cout<<*it2<<std::endl;
}

void unOrderedSet()
{
    //Construct the Set
    std::unordered_set<int> mySet={5,1,2,4,9,0};

    //Print set elements
    for(auto it:mySet) std::cout<<it<<"  ";
    std::cout<<std::endl;

    //Insert Elements
    mySet.insert(3);
    mySet.insert(5);
    mySet.insert(11);
    for(auto it:mySet) std::cout<<it<<"  ";
    std::cout<<std::endl;

    //Erase element
    mySet.erase(0);
    for(auto it:mySet) std::cout<<it<<"  ";
    std::cout<<std::endl;

    //Find Elements
    auto it = mySet.find(5);
    if(it!=mySet.end()) std::cout<<"Found"<<std::endl;
    else                std::cout<<"Not found"<<std::endl;


}

void orderedMultiSet()
{
    //Construct the Set
    std::multiset<int> mySet={5,1,2,4,9,0};

    //Print set elements
    for(auto it:mySet) std::cout<<it<<"  ";
    std::cout<<std::endl;

    //Insert Elements
    mySet.insert(2);
    mySet.insert(5);
    mySet.insert(11);
    for(auto it:mySet) std::cout<<it<<"  ";
    std::cout<<std::endl;

    //Erase element
    mySet.erase(0);
    for(auto it:mySet) std::cout<<it<<"  ";
    std::cout<<std::endl;

    //Find Elements
    auto it = mySet.find(5);
    if(it!=mySet.end()) std::cout<<"Found"<<std::endl;
    else                std::cout<<"Not found"<<std::endl;

    //lower bound
    auto it2 = mySet.lower_bound(5);
    std::cout<<*it2<<std::endl;

    //upper bound
    it2 = mySet.upper_bound(10);
    std::cout<<*it2<<std::endl;

    //count
    std::cout<<mySet.count(5)<<std::endl;
}

void unOrderedMultiSet()
{
    //Construct the Set
    std::unordered_multiset<int> mySet={5,1,2,4,9,0};

    //Print set elements
    for(auto it:mySet) std::cout<<it<<"  ";
    std::cout<<std::endl;

    //Insert Elements
    mySet.insert(2);
    mySet.insert(5);
    mySet.insert(11);
    for(auto it:mySet) std::cout<<it<<"  ";
    std::cout<<std::endl;

    //Erase element
    mySet.erase(0);
    for(auto it:mySet) std::cout<<it<<"  ";
    std::cout<<std::endl;

    //Find Elements
    auto it = mySet.find(5);
    if(it!=mySet.end()) std::cout<<"Found"<<std::endl;
    else                std::cout<<"Not found"<<std::endl;


    //count
    std::cout<<mySet.count(5)<<std::endl;
}

int main()
{
    unOrderedMultiSet();
}