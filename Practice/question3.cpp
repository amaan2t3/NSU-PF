// Q3. Student Result System
// Input marks in three subjects, each out of 100. Reject marks outside 0-100. Calculate percentage. If any subject is
// below 40, display Fail. Otherwise use grades: A (80-100), B (70-79.99), C (60-69.99), D (50-59.99), E (40-49.99).


#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, percentage;

    cout << "Enter marks of three subjects (out of 100): ";
    cin >> m1 >> m2 >> m3;

    if (m1 < 0 || m1 > 100 ||
        m2 < 0 || m2 > 100 ||
        m3 < 0 || m3 > 100) {
        cout << "Invalid marks!";
    }
    else {
        percentage = (m1 + m2 + m3) / 3;

        cout << "Percentage: " << percentage << "%" << endl;

        if (m1 < 40 || m2 < 40 || m3 < 40) {
            cout << "Result: Fail";
        }
        else if (percentage >= 80) {
            cout << "Grade: A" <<endl;
        }
        else if (percentage >= 70) {
            cout << "Grade: B" <<endl;
        }
        else if (percentage >= 60) {
            cout << "Grade: C" <<endl;
        }
        else if (percentage >= 50) {
            cout << "Grade: D" <<endl;
        }
        else {
            cout << "Grade: E" <<endl;
        }
    }

    return 0;
}
