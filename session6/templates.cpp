#include <iostream>



//1-Simple Function Template single argument
template <typename T>
T divide(T x,T y) { return x/y;}

//2-Simple Function Template multiple argument
template <typename T,typename U>
auto multiply(T x,U y) { return x*y;}

//3-Class template
template<typename T>
class myClass
{
public:
T value;
myClass(T v):value(v){}
void print(){std::cout<<"Value: "<<value<<std::endl;}
};

//4-Class template with standalone function
template<typename T>
class myClass2
{
public:
    T value;
    myClass2(T v):value(v){}
    template<typename U>void add(const U&val){this->value+=val;}
    void print(){std::cout<<"Value: "<<value<<std::endl;}
};

//5-Explicit Specialization
template<> class myClass<double>
{
public:
    double value;
    myClass(double v):value(v){std::cout<<"Specialized Constructor"<<std::endl;}
    void print(){std::cout<<"Value: "<<value<<std::endl;}
};                              

//6-Default template arguments
template <typename T,typename U=int>
auto add(T x,U y) { return x+y;}

//7-Partial Specialization
template<typename T,typename U>
void printTypes(T x, U y) { std::cout<<"Primary Template is called"<<std::endl;}
template<typename T>
void printTypes(T x, T y) { std::cout<<"Partial Specialization is called"<<std::endl;}

//8-Const Template Expression
template<typename T, int Size>
class newClass
{
public:
    T data[Size];
    newClass()
    {
        for(int i = 0;i<Size;i++)data[i]=i;
    }
    void print() 
    {
        for(auto it:data)std::cout<<it<<"  ";
        std::cout<<std::endl;
    }
};

//9-Variadic function template
template<typename T> //Base Function
void print(T arg){std::cout<<arg<<std::endl;}

template<typename T,typename ...Args> //Recursive Function
void print(T arg, Args... args)
{
    std::cout<<arg<<"  ";
    print(args...);
}



int main()
{
    //1-
    std::cout<<divide(10, 2)<<std::endl;
    std::cout<<divide(10.2, 2.0)<<std::endl;

    //2-
    std::cout<<multiply(10, 2)<<std::endl;
    std::cout<<multiply(10.2, 2)<<std::endl;

    //3-
    myClass<int> x(2); x.print();
    myClass<float> x2(2.2f); x.print();

    //4-
    myClass2<int> y(2); y.add(2.2f);y.print();
    myClass2<float> y2(2.2f); y2.add(2);y2.print();


    //5-
    myClass<double> z(2.2);


    //6-
    std::cout<<add(10, 2)<<std::endl;
    std::cout<<add(10.2, 2.0)<<std::endl;

    //7-
    printTypes(2,2.0f);
    printTypes(2,2);

    //8-
    newClass<int,5> newClass;
    newClass.print();

    //9-
    print(1,2.1,2.2f,'a',"Omar",50.0f);
}