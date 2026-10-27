#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name,regno,temp;
    int mark1,mark2,mark3;
    public:
    void getdata()
    {
        cout<<"Enter Student's Registration Number: ";
        getline(cin,regno);
        cout<<"Enter Name of Student: ";
        getline(cin,name);
        cout<<"Enter Marks for Subject 1: ";
        getline(cin,temp);
        mark1=stoi(temp);
        cout<<"Enter Marks for Subject 2: ";
        getline(cin,temp);
        mark2=stoi(temp);
        cout<<"Enter Marks for Subject 3: ";
        getline(cin,temp);
        mark3=stoi(temp);
    }
    void putdata()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Registration Number: "<<regno<<endl;
        cout<<"Marks for Subject 1: "<<mark1<<endl; 
        cout<<"Marks for Subject 2: "<<mark2<<endl;
        cout<<"Marks for Subject 3: "<<mark3<<endl;
        if(mark1>=40 && mark2>=40 && mark3>=40)
        {
            char result[5]="PASS";
            cout<<result<<endl;
        }
        else
        {
            char result[5]="FAIL";
            cout<<result<<endl;
        }
    }
};
int main()
{
    Student stu[100];
    string num_students;
    cout<<"Enter number of students: ";
    getline(cin,num_students);
    int n=stoi(num_students);
    if(n<1 || n>100)
    {
        cout<<"Invalid number of students. Please enter a number between 1 and 100."<<endl;
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Enter details for student "<<i+1<<endl;
        stu[i].getdata();
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Details for student "<<i+1<<endl;
        stu[i].putdata();
    }
    return 0;
}