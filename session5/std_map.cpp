#include <iostream>
#include <map>





void orderedMap()
{
    //Construct the Map
    std::map<int,std::string> myMap;

    //insert in the Map
    myMap[1]="One";
    myMap[2]="Two";
    myMap[11]="Eleven";

    //Print elements
    for(auto it:myMap)std::cout<<"Key: "<<it.first<<" , Value: "<<it.second<<std::endl;

    //find element by key
    auto it = myMap.find(2);
    if(it!=myMap.end()) std::cout<<"Found Value: "<<it->second<<std::endl;
    else                std::cout<<"Not found"<<std::endl;

    bool keyExist = myMap.count(2)>0;
    std::cout<<"Key Exists: "<<(keyExist?"Yes":"No")<<std::endl;
}

int main()
{
    orderedMap();
}