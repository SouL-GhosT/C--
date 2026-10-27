#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l = {1, 3, 5, 6, 4, 2, 9, 8};
    list<int> l2 = {20, 78, 95, 36, 7};
    list<int>::iterator itr;

    cout << "Initial list: ";
    for(int x : l)
        cout << x << "\t";
    cout << endl;

    cout << "Size of the list = " << l.size() << endl;

    cout << "Max size of the list = " << l.max_size() << endl << endl;

    l.reverse();
    cout << "List after reversing: " << endl;
    for(int x : l)
        cout << x << "\t";
    cout << endl;

    l.sort();
    cout << "List after sorting: " << endl;
    for(int x : l)
        cout << x << "\t";
    cout << endl;

    cout << "Checking if the list is empty: \nResult: ";
    if(l.empty())
    {
        cout << "List empty ";
    }
    else
    {
        cout << "List not empty ";
    }
    cout << endl;

    cout << "Element at front position = " << l.front() << endl;
    
    cout << "Element at last position = " << l.back() << endl;

    l.push_back(15);
    cout << "List after push_back(15): " << endl;
    for(int x : l)
        cout << x << "\t";
    cout << endl;

    l.push_front(0);
    cout << "List after push_front(0): " << endl;
    for(int x : l)
        cout << x << "\t";
    cout << endl;

    l.pop_back();
    cout << "List after pop_back(): " << endl;
    for(int x : l)
        cout << x << "\t";
    cout << endl;

    l.pop_front();
    cout << "List after pop_front(): " << endl;
    for(int x : l)
        cout << x << "\t";
    cout << endl;

    itr = l.begin();
    advance(itr, 5);
    l.insert(itr, 25);
    cout << "List after inserting 25 at 5th position: " << endl;
    for(int x : l)
        cout << x << "\t";
    cout << endl;

    itr = l.begin();
    advance(itr, 3);
    l.erase(itr);
    cout << "List after erasing element at 3rd position: " << endl;
    for(int x : l)
        cout << x << "\t";
    cout << endl;
    
    l.swap(l2);
    cout << "Lists after swapping: " << endl;
    cout << "List 1: ";
    for(int x : l)
        cout << x << "\t";
    cout << endl;

    cout << "List 2: ";
    for(int x : l2)
        cout << x << "\t";
    cout << endl;

    list<int> l3 = {1, 3, 5, 7};
    list<int> l4 = {2, 4, 6, 8};
    
    cout << "Before merge:" << endl;
    cout << "List 3: ";
    for(int x : l3)
        cout << x << "\t";
    cout << endl;
    
    cout << "List 4: ";
    for(int x : l4)
        cout << x << "\t";
    cout << endl;
    
    l3.merge(l4);
    cout << "After merging l4 into l3: " << endl;
    for(int x : l3)
        cout << x << "\t";
    cout << endl ;

    l.clear();
    if(l.empty())
    {
        cout << "List 1 empty after clear()" << endl;
    }
    else
    {
        cout << "List 1 not empty" << endl;
    }
    cout << endl;

    cout << "List 2 traversal using iterator: " << endl;
    list<int>::iterator itr2;
    itr2 = l2.begin();
    for(itr2; itr2 != l2.end(); ++itr2)
    {
        cout << *itr2 << "\t";
    }
    cout << endl;

    return 0;
}