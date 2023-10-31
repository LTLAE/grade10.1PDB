#include <iostream>
using namespace std;
int main() {
    int	 num1, num2=1919810;
    cout << "please input the first number"<< endl;
    cin >> num1;
    cout << "the first number is" << '\t' << num1 << endl;
    cout << "please input the second number" <<  endl;
    cin >> num2;
    cout << "the second number is" << '\t' << num2 << endl;
    cout << ".........." << endl;
    cout << "result:" << endl;

    if (num1 == 0 && num2 == 1919810) {
        cout << "WHAT ARE YOU DOING??????????" << endl;
    }else if (num1 > num2) {
        cout << num1<<'\t'<<"is bigger" << endl;
    }
    else if (num1 < num2){
        cout << num2<<'\t'<<"is bigger" << endl;
    }
    else{
        cout << "the two numbers are equal" << endl;
    }
}