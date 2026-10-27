#include <iostream>
using namespace std;
class Functions
{
    public:
    int a,b;
    int add(int a,int b)   //Function by passing a parameter and getting a return value
    {
        cout<<"Function by passing a parameter and getting a return value"<<endl;
        cout<<"Sum is: ";
        return a+b;

    }
    void sum(int a,int b)  //Function by passing a parameter and not getting a return value
    {
        cout<<"Function by passing a parameter and not getting a return value"<<endl;
        int s=a+b;
        cout<<"Sum is: "<<s<<endl;
    }
    int sub()              //Function by NOT passing a parameter and getting a return value
    {
        cout<<"Function by NOT passing a parameter and getting a return value"<<endl;
        cout<<"Difference is: ";
        return a-b;
    }
    void diff()            //Function by NOT passing a parameter and not getting a return value
    {
        cout<<"Function by NOT passing a parameter and not getting a return value"<<endl;
        int d=a-b;
        cout<<"Difference is: "<<d<<endl;
    }
};

int main()
{
    Functions f;
    cout<<"Enter the first number: ";
    cin>>f.a;
    cout<<"Enter the second number: ";
    cin>>f.b;
    cout<<f.add(f.a,f.b)<<endl;
    f.sum(f.a,f.b);
    cout<<f.sub()<<endl;
    f.diff();
    return 0;
}