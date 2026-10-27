#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    do {
        cout << "\n===== Calculator Menu =====" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: " << endl;
                cout << "Enter the first number: ";
                cin >> a ;
                cout << "Enter the second number: ";
                cin >> b ;
                cout << "Result = " << a + b << endl;
                break;

            case 2:
                cout << "Enter two numbers: " << endl;
                cout << "Enter the first number: ";
                cin >> a ;
                cout << "Enter the second number: ";
                cin >> b ;
                cout << "Result = " << a - b << endl;
                break;

            case 3:
                cout << "Enter two numbers: " << endl;
                cout << "Enter the first number: ";
                cin >> a ;
                cout << "Enter the second number: ";
                cin >> b ;
                cout << "Result = " << a * b << endl;
                break;

            case 4:
                cout << "Enter two numbers: " << endl;
                cout << "Enter the first number: ";
                cin >> a ;
                cout << "Enter the second number: ";
                cin >> b ;
                if (b != 0)
                    cout << "Result = " << a / b << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;

            case 5:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}