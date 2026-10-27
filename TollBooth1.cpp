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
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(10000,'\n');
            cout<<"Invalid input.Please enter a number."<<endl;
        }
        switch(choice)
        {
            case 1:
            {
                tb.payingCar();
                cout<<"Paying car added!"<<endl;
                break;
            }
            case 2:
            {
                tb.nopayCar();
                cout<<"Non-paying car added!"<<endl;
                break;
            }
            case 3:
            {
                tb.display();
                break;
            }
            case 4:
            {
                tb.display();
                cout<<"Exiting program."<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid choice.Try again."<<endl;
                break;
            }
        }
    }while(choice!=4);
    return 0;   
}