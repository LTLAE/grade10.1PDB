#include <iostream>
using namespace std;

int main() {
    start:;
    int dig=0,input,input4calculate_digit;
    cout << "Please input a number." << '\r' << "The number must be 4 digits. Starting as 0 is acceptable" << endl;
    cin >> input;
    input4calculate_digit=input;
    //debug
    if(input<0||input>9999){
        cout << "What are you doing?" << endl;
        goto start;
    }
    //calculate digit
    while(input4calculate_digit>0) {
        input4calculate_digit=input4calculate_digit/10;
        dig++;
    }
    cout << "The number is " << dig << " digits." << endl;
    //output every digit
    cout << "digits are" << '\t' << input/1000 << '\t' << input%1000/100 << '\t' << input%1000%100/10 << '\t' << input%1000%100%10 << endl;
    cout << "reversed digits are" << '\t' << input%1000%100%10 << '\t' << input%1000%100/10 << '\t' << input%1000/100 << '\t' << input/1000 << endl;

}