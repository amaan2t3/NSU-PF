// Task 5: Larger of Two Numbers
// Input two numbers and display the larger one. Also handle equality.

#include <iostream>

using namespace std;

int main(){

    int num1 ,num2;
    cout << "Enter two number " <<endl;
    cin >> num1 >> num2;
    cout << "Your two number is " << num1 << "  and  " << num2 <<endl;

    if(num1 > num2 ){
        cout << "The larger number is... " << num1 <<endl;
    }else if (num2 >num1){
        cout << "The larger number is... " << num2 <<endl;
        
    }else{
        cout << " Both are equal... " << num1 << " and " <<num2 <<endl;
    }
    

    return 0;
}