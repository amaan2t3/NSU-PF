// //Task 4: Rectangle
// Create two variables length = 8 and width = 5. Calculate and display area and perimeter.
// Expected output: Area = 40, Perimeter = 26
#include <iostream>
using namespace std;
int main(){

    int length =8;
    int width=5;

    int area=length*width;
    int perimeter=2*(length+width);
    cout<<"Area: "<<area<<endl;
    cout<<"Perimeter: "<<perimeter<<endl;
    return 0;
}