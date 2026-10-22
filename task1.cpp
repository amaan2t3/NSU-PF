 
#include <iostream>
using namespace std;

int main() {
    int units;

    cout << "Enter consumed units: " <<endl;
    cin >> units;

    if (units >= 0 && units <= 100) {
        cout << "Category: Low" <<endl;
    }
    else if (units >= 101 && units <= 300) {
        cout << "Category: Medium" <<endl;
    }
    else if (units > 300) {
        cout << "Category: High" <<endl;
    }
    else {
        cout << "Invalid units" <<endl;
    }

    return 0;
}
