// Task 7: Seconds Converter
// Input total seconds and calculate minutes and remaining seconds using / and %.

#include <iostream>

using namespace std;

int main(){

    int totalSeconds ,minutes, remainingSeconds;
    cout <<"Enter your total seconds... " <<endl;
    cin >> totalSeconds;
    cout << "Your total second is... "<< totalSeconds <<endl;

    minutes = totalSeconds/60;
    remainingSeconds = totalSeconds%60;

    cout << "Your total Minutes is... " << minutes <<endl;
    cout << "Your total remaining Seconds is... " << remainingSeconds << endl;


    return 0;
}