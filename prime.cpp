#include <iostream>
using namespace std;    
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int c=0;
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==0 && num>1)
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}