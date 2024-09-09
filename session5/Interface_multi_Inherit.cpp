#include <iostream>


class Drawable
{
    public:
    virtual void draw(void)=0;
};

class Circle: public Drawable
{
    public:
    void draw()override
    {
        std::cout<<"Draw a Circle"<<std::endl;
    }
};

class Rectangle: public Drawable
{
    public:
    void draw()override
    {
        std::cout<<"Draw a Rectangle"<<std::endl;
    }
};

class Square: public Drawable
{
    public:
    void draw()override
    {
        std::cout<<"Draw a Square"<<std::endl;
    }
};


void fun(Drawable&shape)
{
    shape.draw();
}


int main()
{
    Circle x;
    fun(x);

    Rectangle y;
    fun(y);

    Square z;
    fun(z);
}