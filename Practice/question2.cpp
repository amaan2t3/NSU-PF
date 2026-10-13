// Q2. Electricity Bill Calculator
// Input the number of electricity units (nonnegative). Use one rate for all units: 0-100 units at Rs. 10/unit, 101-200 at
// Rs. 15/unit, and above 200 at Rs. 20/unit. If the base bill exceeds Rs. 3000, add a 10% surcharge. Display the final
// bill.
#include <iostream>
using namespace std;

int main()
{

    int units;
    double bill, surcharge = 0;
    cout << "Enter Your Electricity Units  " << endl;
    cin >> units;

    if (units < 0)
    {
        cout << "Invlid Units" << endl;
    }
    else
    {
        if (units <= 100)
        {
            bill = units * 10;
        }
        else if (units <= 200)
        {
            bill = units * 15;
        }
        else
        {
            bill = units * 20;
        }
        if (bill > 3000)
        {
            surcharge = bill * 0.10;
        }
        bill = bill + surcharge;

        cout << "Final Electricity Bill = Rs. " << bill <<endl;
    }

    return 0;
}