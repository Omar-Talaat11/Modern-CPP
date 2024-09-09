#include <iostream>
#include <vector>
#include <algorithm>




class Names
{
    private:
    std::vector<std::string> names;
    public:
    Names() = default;
    void addName(const std::string&name)
    {
        names.push_back(name);
    }
    void displayNames()
    {
        for(auto it:names)std::cout<<it<<std::endl;
    }
    void findName(const std::string&nametofind) const
    {
        auto it = std::find(names.begin(),names.end(),nametofind);
        if(it!=names.end())
        {
            std::cout<<"Name is Found at Index: "<<std::distance(names.begin(),it)<<std::endl;
        }
        else
        {
            std::cout<<"Name is not found"<<std::endl;
        }
    }
};


int main()
{
    Names myNames;

    myNames.addName("Omar");
    myNames.addName("Hady");
    myNames.addName("Saber");
    myNames.addName("Bob");

    myNames.displayNames();

    myNames.findName("Bob");
}