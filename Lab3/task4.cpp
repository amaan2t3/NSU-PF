// Task 4: Positive, Negative, or Zero
// Use if / else-if / else to classify a number.

#include <iostream>

using namespace std;

int main(){

    int number;
    cout << "Enter a number " <<endl;
    cin >> number;

    cout << "Your number is " << number <<endl;

    if(number > 1){
        cout << "Your Number is positive " << number <<endl;

    }else if(number < 1){
                cout << "Your Number is Negative " << number <<endl;

    } else{
        cout << "Your Number is Zero  " << number <<endl;
    }
    


    return 0;
}