#include<iostream>
#include<bitset>
#include<string>
#include<iomanip>
using namespace std;
int main() {
    int input;
    int b = 0;	    //make while working
    while (b == 0) {
        cout << "Please input the number. The number must larger than 1000" << endl;
        cin >> input;
        if (input <= 1000) {
            cout << "Please input a number larger than 1000" << endl; //debug
        }
        else {
            bitset<32> binaryinput(input);
            cout << "Raw binary of the number is" << endl;
            cout << binaryinput << endl;
            cout << "Replacing the last four numbers with 1111" << endl;
            binaryinput.set(0,1);
            binaryinput.set(1,1);
            binaryinput.set(2,1);
            binaryinput.set(3,1);       //old ways always work
            cout << "New binary of the number is" <<endl;
            cout << binaryinput << endl;
            break;
        }
    }
}