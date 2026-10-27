#include <iostream>
using namespace std;
int prime(int n)
{
    int c=0;
    for(int i=2;i<=n/2;i++)        
    {
        if(n%i==0)
            {
                c++;
                break;
            }
    }
    if(c==0 && n>1)
    {
        return n;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int lr,ur;
    cout<<"Enter the lower range: ";
    cin>>lr;
    cout<<"Enter the upper range: ";
    cin>>ur;
    if(lr<1 || ur<1)
    {
        cout<<"Lower/Upper range should be greater than or equal to 1."<<endl;
        return 1;
    }
    else if(lr>ur)
    {
        cout<<"Lower range should be less than or equal to upper range."<<endl;
        return 1;
    }
    else
    {
        cout<<"Prime numbers between "<<lr<<" and "<<ur<<" are: ";
        for(int i=lr;i<=ur;i++)
        {
            if(prime(i))
            {
                cout<<i<<" ";
            }
        }
    }
    return 0;
}