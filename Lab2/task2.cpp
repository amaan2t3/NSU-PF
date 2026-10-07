// Task 2: Two Numbers
// Input two integers and display sum, difference, product, quotient, and remainder.

#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    cout << "Enter to Inegers Number" << endl;
    cin >> num1 >> num2;
    cout << "Your two number is  " << num1 << " and " << num2 << endl;
    cout << "Sum ::" << num1 + num2 << endl;
    cout << "Difference ::" << num1 - num2 << endl;
    cout << "Product::" << num1 * num2 << endl;
    cout << "Quotient::" << num1 / num2 << endl;
    cout << "Remainder::" << num1 % num2 << endl;


    return 0;
}