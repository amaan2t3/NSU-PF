// Task 6: Temperature Conversion
// Input Celsius and calculate Fahrenheit using F = (C * 9.0 / 5.0) + 32.
#include <iostream>
using namespace std;

int main(){

    float celsius ,fahrenheit;
    
    cout <<"Enter Temperatur In Celsius..." <<endl;
    cin >> celsius;
    cout << "Your Temperture is... " << celsius << endl;
    
    fahrenheit = (celsius*9.0/5.0) +32;
    cout << "Your Celsius Temperature into Fahrenheit... " << fahrenheit <<endl;

    return 0;
}