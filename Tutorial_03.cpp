#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    map<int, string> m = {
        {1, "Alice"},
        {3, "Charlie"},
        {5, "Eve"},
        {2, "Bob"},
        {4, "Diana"}
    };

    map<int, string> m2 = {
        {10, "John"},
        {20, "Jane"},
        {30, "Jake"}
    };

    map<int, string>::iterator itr;
    cout << "Initial map (auto-sorted by key): " << endl;
    for(auto x : m)
        cout << x.first << " -> " << x.second << "\t";
    cout << endl << endl;

    cout << "Size of the map = " << m.size() << endl;

    cout << "Max size of the map = " << m.max_size() << endl << endl;

    cout << "Checking if the map is empty: \nResult: ";
    if(m.empty())
    {
        cout << "Map empty ";
    }
    else
    {
        cout << "Map not empty ";
    }
    cout << endl << endl;

    m.insert({6, "Frank"});
    cout << "Map after insert({6, Frank}): " << endl;
    for(auto x : m)
        cout << x.first << " -> " << x.second << "\t";
    cout << endl << endl;

    m[7] = "Grace";
    cout << "Map after m[7] = Grace: " << endl;
    for(auto x : m)
        cout << x.first << " -> " << x.second << "\t";
    cout << endl << endl;

    cout << "Element with key 3 using m[3]    = " << m[3] << endl;
    cout << "Element with key 5 using m.at(5) = " << m.at(5) << endl << endl;

    itr = m.find(4);
    if(itr != m.end())
        cout << "Found key 4 -> " << itr->second << endl;
    else
        cout << "Key 4 not found" << endl;
    cout << endl;

    m.erase(6);
    cout << "Map after erasing key 6: " << endl;
    for(auto x : m)
        cout << x.first << " -> " << x.second << "\t";
    cout << endl << endl;

    itr = m.begin();
    advance(itr, 2);
    m.erase(itr);
    cout << "Map after erasing element at 2nd index position: " << endl;
    for(auto x : m)
        cout << x.first << " -> " << x.second << "\t";
    cout << endl << endl;

    m.swap(m2);
    cout << "Maps after swapping: " << endl;
    cout << "Map 1: " << endl;
    for(auto x : m)
        cout << x.first << " -> " << x.second << "\t";
    cout << endl;

    cout << "Map 2: " << endl;
    for(auto x : m2)
        cout << x.first << " -> " << x.second << "\t";
    cout << endl << endl;

    m.clear();
    if(m.empty())
    {
        cout << "Map 1 empty after clear()" << endl;
    }
    else
    {
        cout << "Map 1 not empty" << endl;
    }
    cout << endl;

    cout << "Map 2 traversal using iterator: " << endl;
    map<int, string>::iterator itr2;
    itr2 = m2.begin();
    for(itr2; itr2 != m2.end(); ++itr2)
    {
        cout << itr2->first << " -> " << itr2->second << "\t";
    }
    cout << endl;
    
    return 0;
}