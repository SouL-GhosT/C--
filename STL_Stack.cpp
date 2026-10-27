#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout << "Top element = " << s.top() << endl;
    cout << "Size of stack = " << s.size() << endl << endl;

    cout << "All elements in stack: " << endl;
    stack<int> temp = s;
    while(!temp.empty())
    {
        cout << temp.top() << "\t";
        temp.pop();
    }
    cout << endl << endl;

    s.pop();
    cout << "Stack after pop(): " << endl;
    temp = s;
    while(!temp.empty())
    {
        cout << temp.top() << "\t";
        temp.pop();
    }
    cout << endl << endl;

    cout << "Top element after pop = " << s.top() << endl;
    cout << "Size after pop = " << s.size() << endl << endl;

    if(s.empty())
    {
        cout << "Stack empty" << endl;
    }
    else
    {
        cout << "Stack not empty" << endl;
    }

    return 0;
}