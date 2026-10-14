
#include <iostream>
using namespace std;

int main() {
    int num, first, second, third, sum;

    cout << "Enter a three-digit number: ";
    cin >> num;

    first = num / 100;
    second = (num / 10) % 10;
    third = num % 10;

    sum = first + second + third;

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
