//  Create a small shop receipt program. Input item price, quantity, and discount amount. Calculate subtotal = price * quantity and final total = subtotal - discount. Display all values clearly. Do not use if/else yet.

#include <iostream>
using namespace std;

int main() {
    float price, discount, subtotal, finalTotal;
    int quantity;

    cout << "Enter item price: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter discount amount: ";
    cin >> discount;

    subtotal = price * quantity;
    finalTotal = subtotal - discount;

    cout << "\n========== SHOP RECEIPT ==========" << endl;
    cout << "Item Price:       " << price << endl;
    cout << "Quantity:         " << quantity << endl;
    cout << "Subtotal:         " << subtotal << endl;
    cout << "Discount:         " << discount << endl;
    cout << "Final Total:      " << finalTotal << endl;
    cout << "==================================" << endl;

    return 0;
}
 