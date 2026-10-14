
#include <iostream>
using namespace std;

int main() {
    int num, original, first, second, third, reverse;

    cout << "Enter a three-digit number: ";
    cin >> num;

    original = num;

    first = num / 100;
    second = (num / 10) % 10;
    third = num % 10;

    reverse = third * 100 + second * 10 + first;

    if (original == reverse) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
