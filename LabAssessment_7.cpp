#include<iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v={1,3,5,6,4,2,9,8};
    vector<int> v2={20,78,95,36,7};
    vector<int>::iterator itr;

    cout<<"Size of the vector= "<<v.size()<<endl;

    cout<<"Capacity of the vector= "<<v.capacity()<<endl;

    cout<<"Max size of the vector= "<<v.max_size()<<endl;

    reverse(v.begin(),v.end());
    cout<<"Vector after reversing:  "<<endl;
    for(int x: v)
        cout<<x<<"\t";
    cout<<endl;

    sort(v.begin(),v.end());
    cout<<"Vector after sorting:  "<<endl;
    for(int x: v)
        cout<<x<<"\t";
    cout<<endl;

    cout<<"checking if the vector is empty: \nResult: ";
    if(v.empty())
    {
        cout<<"Vector empty ";
    }
    else
    {
        cout<<"Vector not empty ";
    }
    cout<<endl;    
        
    cout<<"Element at 3rd position= "<<v.at(3)<<endl;  
    cout<<"Element at 1st position= "<<v.front()<<endl;
    cout<<"Element at last position= "<<v.back()<<endl;
    v.push_back(15);                //inserting new element at the end of the vector

    cout<<"vector after inserting element "<<endl;
    for(int x: v)
        cout<<x<<"\t";
    cout<<endl;

    v.pop_back();
    cout<<"vector after removing element "<<endl;
    for(int x: v)
        cout<<x<<"\t";
    cout<<endl;

    itr=v.begin();
    advance(itr,5);
    v.insert(itr,25);
    cout<<"vector after inserting element at 5th index position "<<endl;
    for(int x: v)
        cout<<x<<"\t";
    cout<<endl;
   
    itr=v.begin();  
    advance(itr,3);
    v.erase(itr);
    cout<<"vector after removing element at 3rd index position "<<endl;
    for(int x: v)
        cout<<x<<"\t";
    cout<<endl;

    v.swap(v2);
    cout<<"vectors after swapping "<<endl;
    cout<<"vector 1"<<endl;
    for(int x: v)
        cout<<x<<"\t";
    cout<<endl;

    cout<<"vector 2"<<endl;
    for(int x: v2)
        cout<<x<<"\t";
    cout<<endl;

    v.clear();
    if(v.empty())
    {
        cout<<"vector 1 empty"<<endl;
    }
    else{
        cout<<"vector 1 not empty"<<endl;
    }

    cout<<"Vector traversal using iterator "<<endl;
    vector<int>::iterator itr2;
    itr2=v2.begin();
    for(itr2;itr2!=v2.end();++itr2)
    {
        cout<<*itr2<<"\t";
    }

    return 0;

}