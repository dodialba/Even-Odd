#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter any number " << endl;

    cin >> number;

    if (number % 2 == 1)

        cout << "The number is odd " << endl;

    else

        cout << "The number is even" << endl;
}