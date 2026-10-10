// Task 8: Range Check
// Input a number and display In range when it is from 1 to 100 inclusive using &&.

#include <iostream>

using namespace std;

int main(){
    float number;
    cout << "enter a number " <<endl;
    cin >> number;
    // cout << "Your Number is " << number <<endl;

    if (number >= 0 && number <= 100) {
         cout << "Your Number Range In 1 to 100 " << "\nNumber is " << number <<endl;
    }else{
        cout << "Your Number is out of range  " <<endl;
    }
    
}