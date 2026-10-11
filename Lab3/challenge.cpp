// Build a simple electricity bill category program. Input consumed units and classify them as Low (0-100), Medium (101-300), or High (above 300). For this lab, only display the category; detailed billing formulas can be added later.

#include <iostream>
using namespace std;

int main() {
    int units;

    cout << "Enter consumed electricity units: ";
    cin >> units;

    if (units >= 0 && units <= 100) {
        cout << "Category: Low" << endl;
    }
    else if (units <= 300 && units >= 101) {
        cout << "Category: Medium" << endl;
    }
    else if (units > 300) {
        cout << "Category: High" << endl;
    }
    else {
        cout << "Invalid units!" << endl;
    }

    return 0;
}