#include <iostream>
using namespace std;

int main()
{
    int marks[5];

    cout << "Enter the student marks:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }

    cout << "Sum of all student marks is: " << sum << endl;

    return 0;
}
