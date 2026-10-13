// Q1. Largest and Smallest
// Input three different integers. Display the largest and smallest using conditional statements.

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter Three Number..." << endl;
    cin >> num1 >> num2 >> num3;

    int largest = num1;
    int smallest = num1;

    if (largest <= num2)
    {
        largest = num2;
    }
    if (largest <= num3)
    {
        largest = num3;
    }

    /// check smallest number

    if (smallest >= num2)
    {
        smallest = num2;
    }

    if (smallest >= num3)
    {
        smallest = num3;
    }

    cout << "Largest Number is  " << largest << endl;

    cout << "Smallest Number is  " << smallest << endl;

    return 0;
}