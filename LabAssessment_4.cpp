#include <iostream>
using namespace std;
class Student
{
    public:
    string name;
    string regno;
    void getdata()
    {
        cout<<"Enter Student's name: ";
        getline(cin,name);
        cout<<"Enter Student's registration number: ";
        cin>>regno;
    }
};
class Test:public Student
{
    public:
    int marks1;
    int marks2;
    void getmarks()
    {
        cout<<"Enter marks for subject 1: ";
        cin>>marks1;
        cout<<"Enter marks for subject 2: ";
        cin>>marks2;
    }

};
class Result:public Test
{
    public:
    int total;
    void tmarks()
    {
        total=marks1+marks2;
    }
    void display()
    {
        cout<<"Student's name: "<<name<<endl;
        cout<<"Student's registration number: "<<regno<<endl;
        cout<<"Marks for subject 1: "<<marks1<<endl;
        cout<<"Marks for subject 2: "<<marks2<<endl;
        cout<<"Total marks: "<<total<<endl;
    }
};

int main()
{
    Result r;
    r.getdata();
    r.getmarks();
    r.tmarks();
    r.display();
    return 0;
}