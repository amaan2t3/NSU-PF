// Challenge: Create variables for itemName, price, quantity, and total. Assign all values in code, calculate total = price * quantity, and print a small bill. Do not use cin.
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string itemName = "football";
    int price = 1500;
    int  quantity =  5;
    int total = price*quantity;

    cout <<"Item Name is:=> " << itemName << endl;
    cout << "One football Price is:=> " << price << endl;
    cout << "Your quantity is:=> " << quantity << endl;
    cout << "Your total Price is:=> " << total <<endl;


    return 0;
}