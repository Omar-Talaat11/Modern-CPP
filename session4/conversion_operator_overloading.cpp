#include <iostream>


class Complex
{
    public:
    Complex()=default;
    explicit Complex(float a,float b):a(a),b(b){}

    Complex operator+(Complex& B)
    {
        Complex Result(this->a+B.a,this->b+B.b);
        return Result;
    }

    void operator+(int n)
    {
        this->a+=n;
    }
    void print(void)
    {
        std::cout<<(this->a)<<"+"<<this->b<<"i"<<std::endl;
    }

    void operator()()
    {
        std::cout<<(this->a)<<"+"<<this->b<<"i"<<std::endl;
    }

    void operator++()
    {
        std::cout<<"Pre Increment"<<std::endl;
        a++;
    }
    void operator++(int)
    {
        std::cout<<"Post Increment"<<std::endl;
        a++;
    }

    operator std::string()
    {
        std::string st=std::to_string(this->a)+"+"+std::to_string(this->b)+"i";
        return st;
    }

    explicit operator int()
    {
        return this->a;
    }
    private:
    friend int operator+(int value,Complex&C);
    float a;
    float b;
};

int operator+(int value,Complex&C)
{
    return value+C.a;
}

int main()
{
    Complex A{2,3};
    Complex B(2,3);
    Complex C{};

    C=A+B;
    C+2;
    2+C;
    C.print();
    C();
    ++C;
    C++;
    std::string st = C;
    std::cout<<st<<std::endl;
}