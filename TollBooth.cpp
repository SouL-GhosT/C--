#include <iostream>
using namespace std;
class tollBooth
{
    private:
    unsigned int TotalCars;
    double TotalCash;
    public:
    tollBooth()
    {
        TotalCars=0;
        TotalCash=0.0;
    }
    void payingCar()
    {
        TotalCars++;
        TotalCash+=0.50;
    }
    void nopayCar()
    {
        TotalCars++;
    }
    void display() const
    {
        cout<<"Total Cars: "<<TotalCars<<endl;
        cout<<"Total Cash: $"<<TotalCash<<endl;
    }
};

int main()
{
    tollBooth tb;
    int choice;
    do
    {
        cout<<"\n1. Paying Car\n2. Non-Paying Car\n3. Display\n4. Exit\nEnter your choice: ";
        cin>>choice;
        if(choice==1)
        {
            tb.payingCar();
            cout<<"Paying car added!"<<endl;
        }
        else if(choice==2)
        {
            tb.nopayCar();
            cout<<"Non-paying car added!"<<endl;
        }
        else if(choice==3)
        {
            tb.display();
        }
        else if(choice==4)
        {
            tb.display();
            cout<<"Exiting program."<<endl;
            break;
        }
        else if(cin.fail())
        {
            cin.clear();
            cin.ignore(10000,'\n');
            cout<<"Invalid input.Please enter a number."<<endl;
            continue;
        }
        else
        {
            cout<<"Invalid choice.Try again."<<endl;
        }
    }while(true);
    return 0;   
}