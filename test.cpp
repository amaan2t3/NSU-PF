
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;

    cout << "Enter five numbers: ";
    cin >> a >> b >> c >> d >> e;

    int greatest, smallest;

    if (a > b)
        greatest = a;
    else
        greatest = b;

    if (c > greatest)
        greatest = c;

    if (d > greatest)
        greatest = d;

    if (e > greatest)
        greatest = e;

    if (a < b)
        smallest = a;
    else
        smallest = b;

    if (c < smallest)
        smallest = c;

    if (d < smallest)
        smallest = d;

    if (e < smallest)
        smallest = e;

    cout << "Greatest number = " << greatest << endl;
    cout << "Smallest number = " << smallest << endl;

    return 0;
}
