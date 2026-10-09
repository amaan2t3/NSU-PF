// Task 1: Positive Check
// Input an integer. If it is greater than zero, display Positive.

#include <iostream>

using namespace std;

int main(){

    int integerNum;
    cout <<"Enter Integer Number..." <<endl;
    cin >> integerNum;
    if(integerNum > 0){

        cout << "Your Number is Positive..." << integerNum <<endl;
    }else{

        cout << "Your Number is Negative..." << integerNum << endl;
    }

    return 0;
}