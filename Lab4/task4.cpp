// Task 4: Input 5 marks and calculate average
// Problem: Input marks of 5 students, calculate total and average, then display both.
// Hint: Use int total = 0; and float average = total / 5.0;

#include <iostream>
using namespace std;

int main(){

    int marks, total=0;
    float average;

    for (int i = 1; i <=5; i++) {
         cout<< "enter marks of student " << i <<endl;
         cin >> marks;
         total = total + marks;
    }
    average = total/5.0;

    cout <<"total marks: " << total <<endl;
    cout << "total average :" << average <<endl;
}