#include <iostream>
using namespace std;

int main() {
    int percentage, attendance, warning;

    cout << "Enter student percentage: ";
    cin >> percentage;

    cout << "Enter student attendance: ";
    cin >> attendance;

    cout << "Enter warning status (1 = warning, 0 = no warning): ";
    cin >> warning;

    cout << "\nResult: ";

    if (warning == 1) {
        cout << "REJECTED";
    } else if (attendance < 80) {
        cout << "REJECTED";
    } else if (percentage >= 85) {
        cout << "MERIT";
    } else if (percentage >= 70) {
        cout << "WAITLIST";
    } else {
        cout << "REJECTED";
    }

    cout << endl;
    return 0;
}