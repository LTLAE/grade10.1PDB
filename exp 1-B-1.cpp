#include <iostream>
using namespace std;
int main() {
    int input = 114514;
    int b = 0; //make while working
    while (b<=0) {
        cout << "Please input x. Or input 114514 to quit." << endl; //enhance user experience
        cin >> input;
        if (input == 114514) {
            break;
        }
        else if (input <= 0) {
            cout << "The result is " << input << endl;
        }
        else if (input > 0 && input < 10) {
            cout << "The result is " << input * 5 - 10 << endl;
        }
        else if (input >= 10) {
            cout << "The result is " << input * 10 - 20 << endl;
        }
    }
}