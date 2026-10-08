// Task 3: Rectangle
// Input length and width. Calculate area and perimeter.
#include <iostream>
using namespace std;

int main(){

    int length , width;
    cout << "enter length and width" << endl;
    cin >> length >> width ;
    cout << "Your length and width is...  " << length << " and " << width << endl;

    cout << "Area Of Rectange is..." << length * width << endl;
     cout << "Perimeter  Of Rectange is..." << 2*(length + width) << endl;

    return 0;
}