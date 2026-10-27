#include <iostream>
using namespace std;
class Person
{
    public:
    void display()
    {
        cout<<"This is a person."<<endl;
    }
};
class Employee:public virtual Person
{
    public:
    void display()
    {
        cout<<"This is an employee."<<endl;
    }
};
class Student:public virtual Person
{
    public:
    void display()
    {
        cout<<"This is an student."<<endl;
    }
};
class Intern:public Employee,public Student
{
    public:
    void display()
    {
        cout<<"This is an intern."<<endl;
    }
};

int main()
{
    Intern i;
    i.display();
    i.Employee::display();
    i.Student::display();
    i.Person::display();
    return 0;
}