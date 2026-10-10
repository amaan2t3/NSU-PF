// Task 2: Pass/Fail
// Input marks. Display Pass for marks >= 50, otherwise Fail.

#include <iostream>

using namespace std;

int main()
{

    float marks;

    cout << "enter Your marks " << endl;

    cin >> marks;

    if (marks >= 50)
    {
        cout << "Your are Pass.!  " << marks << endl;
    }
    else
    {
        cout << "Your are fail.!" << marks << endl;
    }

    return 0;
}