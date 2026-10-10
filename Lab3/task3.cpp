// Task 3: Even/Odd
// Input an integer and use % to determine whether it is even or odd.

#include <iostream>

using namespace std;

int main(){
    int num;
     cout << "Enter A number" <<endl;
     cin >> num;
     cout << "Your Number is... " << num <<endl;

     if(num %2 == 0 ){
        cout << "Your number is even... " << num <<endl;
     }else{
        cout << "Your number is odd...  " << num <<endl;
     }


    return 0;
}