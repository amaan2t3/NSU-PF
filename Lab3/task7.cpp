// Task 7: Grade Calculator
// Use an else-if ladder to display A, B, C, D, or F based on marks.
#include <iostream>

using namespace std;

int main(){

    float marks;
    cout << "Enter Your marks " <<endl;
    cin >> marks;
     cout << "Your marks is   " << marks <<endl;
     if (marks >=90){
        
         cout << "Your Grade is A " << marks <<endl;
     }else if (marks >=80) {
        cout << "Your Grade is B " << marks <<endl;
        
     }else if (marks >=70) {
        cout << "Your Grade is B+ " << marks <<endl;
        
     }else if (marks >=60) {
        cout << "Your Grade is C " << marks <<endl;
        
     }else if (marks >=50) {
        cout << "Your Grade is D " << marks <<endl;
        
     }else{
        cout << "your are fail   " << marks <<endl;
     }
     
     

    return 0;
}