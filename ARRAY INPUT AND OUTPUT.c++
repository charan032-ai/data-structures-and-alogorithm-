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

    cout << "\nStudent Marks:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}
