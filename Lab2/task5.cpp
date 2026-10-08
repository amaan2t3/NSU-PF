// Task 5: Average of Three Marks
// Input three marks and calculate their average.

#include <iostream>
using namespace std;


int main(){

    int marks1 , marks2 , marks3;
    cout << "Enter Your Marks" << endl;
    cin >> marks1 >> marks2 >>marks3;
    cout << "Your marks are...." << marks1 <<" , "<< marks2<<" and " << marks3 <<endl;
    float average = (marks1 + marks2 + marks3)/3.0;
    cout << "Your average marks is...." << average << endl;

    return 0;
}