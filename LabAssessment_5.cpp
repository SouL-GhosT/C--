#include <iostream>
using namespace std;
class Shape
{
    public:
    virtual void area()=0;
};
class Circle:public Shape
{
    float r;
    public:
    void area()
    {
        cout<<"Enter radius of circle: ";
        cin>>r;
        cout<<"Area of Circle: "<<3.14*r*r<<endl;
    }
};
class Rectangle:public Shape
{
    float l,b;
    public:
    void area()
    {
        cout<<"Enter length of rectangle: ";
        cin>>l;
        cout<<"Enter breadth of rectangle: ";
        cin>>b;
        cout<<"Area of Rectangle: "<<l*b<<endl;
    }
};
class Triangle:public Shape
{
    float b,h;
    public:
    void area()
    {
        cout<<"Enter base of triangle: ";
        cin>>b;
        cout<<"Enter height of triangle: ";
        cin>>h;
        cout<<"Area of Triangle: "<<0.5*b*h<<endl;
    }
};

int main()
{
    Shape *s;
    Circle c;
    Rectangle r;
    Triangle t;
    s=&c;
    s->area();
    s=&r;
    s->area();
    s=&t;
    s->area();
    return 0;
}