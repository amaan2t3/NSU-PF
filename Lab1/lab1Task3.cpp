#include <iostream>
using namespace std;
//Task 3: Two Numbers
//Create two int variables with fixed values. Display their sum, difference, product, and quotient. Do not use cin.
int main(){
    int num1 = 8;
    int num2 = 10;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    double quotient = static_cast<double>(num1) / num2; // Use static_cast  
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;     
    cout << "Quotient: " << quotient << endl;
    
    return 0;
}