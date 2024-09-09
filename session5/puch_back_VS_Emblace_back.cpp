#include <iostream>
#include <vector>




struct Person
{
    std::string name;
    int age;

    Person(const std::string &n,int a):name(n),age(a){std::cout<<"Person Created: "<<name<<std::endl;}
    Person(const Person &Another):name(Another.name),age(Another.age){std::cout<<"Person Copied: "<<name<<std::endl;}
    ~Person(){std::cout<<"Person Deleted: "<<name<<std::endl;}
};


int main()
{
    std::vector<Person> people;

    people.push_back(Person("Omar",23));

    people.emplace_back(Person("Bob",23));

//     push_back copies or moves an existing object into the vector.
//     emplace_back constructs an object in place at the end of the vector, potentially offering better performance and flexibility.
}

