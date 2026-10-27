// Task 3: Sum of first N numbers
// Problem: Input a positive integer N and calculate the sum from 1 to N.
// Hint: Use total = total + i inside the loop.

#include <iostream>
using namespace std;
int main(){
    int N;
    int sum=0;
    cout<< "enter a positive integer number" <<endl;
    cin>> N;

    for ( int i = 1; i <=N; i++) {
        sum = sum+i;
    }
   cout<< "Sum:" << sum  <<endl;

    
}