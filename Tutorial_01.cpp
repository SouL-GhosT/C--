#include <iostream>
using namespace std;
class constructor
{
    int a,b;
    public:
    constructor()   //Default Constructor
    {
        a=29;
        b=36;
    }
    constructor(int x,int y)   //Paratemerized Constructor
    {
        a=x;
        b=y;
    }
    void sum()
    {
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
        cout<<"Sum of a and b: "<<a+b<<endl;
    }
    constructor(constructor &c)   //Copy Constructor
    {
        a=c.a;
        b=c.b;
    }
    ~constructor()   //Destructor
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    cout<<"Registration No.: 25BCE10984"<<endl;
    cout<<"Name: Atharv Singh"<<endl;
    constructor c1,c2(43,48); 
    constructor c3(c2);   //Using Copy Constructor
    cout<<"Calling Default Constructor"<<endl;
    c1.sum();
    cout<<"Calling Parameterized Constructor"<<endl;
    c2.sum();
    cout<<"Calling Copy Constructor"<<endl;
    c3.sum();
    return 0;
}
