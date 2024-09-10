#include <iostream>
#include <memory>




class Node
{
    public:
    Node(const char&id):id(id){std::cout<<id<<" Created"<<std::endl;}
    ~Node(){std::cout<<id<<" Reclaimed"<<std::endl;}
    void assign_shared(std::shared_ptr<Node> ptr){this->sharedNextPtr=ptr;}
    void assign_weak(std::weak_ptr<Node> ptr){this->weakNextPtr=ptr;}
    private:
    char id;
    std::shared_ptr<Node> sharedNextPtr;
    std::weak_ptr<Node> weakNextPtr;
};



void test_Cirular_Reference(void)
{
    std::shared_ptr<Node>A = std::make_shared<Node>('A');
    std::shared_ptr<Node>B = std::make_shared<Node>('B');
    std::shared_ptr<Node>C = std::make_shared<Node>('C');

    A->assign_shared(B);
    B->assign_shared(C);
    C->assign_weak(std::weak_ptr<Node>(A));

    std::cout<<"Leaving"<<std::endl;
}

int main()
{
    test_Cirular_Reference();
}