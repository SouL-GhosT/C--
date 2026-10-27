#include <iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;
};
class Student:public Person
{
    public:
    int marks;
    void accept()
    {
        cout<<"Enter Student's name: ";
        getline(cin,name);
        cout<<"Enter Student's age: ";
        cin>>age;
        cout<<"Enter Student's marks: ";
        cin>>marks;
    }
    void display()
    {
        cout<<"Student's name: "<<name<<endl;
        cout<<"Student's age: "<<age<<endl;
        cout<<"Student's marks: "<<marks<<endl;
    }
};

int main()
{
    Student s;
    s.accept();
    s.display();
    return 0;
}
