#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";   
    cin >> b;
    char operation;
    cout << "Enter operation (1, 2, 3, 4): ";
    cin >> operation;
 switch (operation)
 {
 case '1':
    cout << "Result: " << a + b << endl;
    break;
 case '2':
    cout << "Result: " << a - b << endl;
    break;
 case '3':
    cout << "Result: " << a * b << endl;
    break;
 case '4':
    if (b != 0)
        cout << "Result: " << a / b << endl;
    else
        cout << "Error: Division by zero is not allowed." << endl;  
    break;
 }  
    return 0;
}
