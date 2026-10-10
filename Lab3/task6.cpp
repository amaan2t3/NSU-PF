// Task 6: Voting Eligibility
// Input age and display Eligible if age >= 18, otherwise Not eligible.

#include <iostream>

using namespace std;

int main(){

    int age;
    cout << "Enter Your age ... " <<endl;
    cin >> age;
    cout << "Your age is        "<< age <<endl;
    if (age >=18){
        cout << "Your are eligible For voting" <<endl;

    }else{
        cout << "Your are Not eligible for voting" <<endl;
    }
    

    return 0;
}