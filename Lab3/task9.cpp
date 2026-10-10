// Task 9: Weekend Check
// Input day number 1-7. Display Weekend if day is 6 or 7 using ||.

#include <iostream>

using namespace std;

int main(){

    int dayNumber;
    cout << "Enter Day number e.g 1 to 7 " <<endl;
    cin >> dayNumber;
    if (dayNumber == 6 || dayNumber == 7) {
         cout << "weekend " <<endl;
    }else{
        cout << "weekday " <<endl;
    }
    
    return 0;
}