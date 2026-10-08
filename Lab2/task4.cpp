// Task 4: Simple Bill
// Input item price and quantity. Calculate total = price * quantity.
#include <iostream>
#include <string>
using namespace std;

int main(){

    string itemName;
    float price;
    int quantity;
    cout << "enter item name " << endl;
    cin >> itemName;
     cout << "enter item price " << endl;
    cin >> price;
     cout << "enter item quantity " << endl;
    cin >> quantity;
   
    cout << "Your total Bill is....." << price * quantity << endl;
    return 0;
}