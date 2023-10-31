#include <iostream>
using namespace std;

int win(){
    cout << "You win!" << endl;
}


int main() {

    restart:;
    int sum, input, win4 = 0, win5 = 0, win6 = 0, win8 = 0, win9 = 0, win10 = 0;
    start:;
    cout << "Input your dice result: ";
    cin >> input;
    if(input<1||input>6){   //debug
        cout << "What are you doing???" << endl;
        goto start;
    }
    sum=input+(rand() % (6))+ 1;
    cout << "Final result is "<< input << " adds " << sum-input << "(rolled by computer) = " << sum << endl;

    if(sum == 7 || sum == 11){
        win();
    }else if(sum == 4 && win4 == 1){
        win();
    }else if(sum == 5 && win5 == 1){
        win();
    }else if(sum == 6 && win6 == 1){
        win();
    }else if(sum == 8 && win8 == 1){
        win();
    }else if(sum == 9 && win9 == 1){
        win();
    }else if(sum == 10 && win10 == 1){
        win();
    }else if(sum == 2 || sum == 3 | sum == 12){
        cout << "You lose" << endl;
        cout << "Wanna try again?(y/n): " << endl;
        char again;
        cin >> again;   cout << endl;
        if(again=='y')  goto restart;
    }else if(sum == 4){
        win4=1;
        cout << "Nice job. You are allowed to try again." << endl;
        goto start;
    }else if(sum == 5){
        win5=1;
        cout << "Nice job. You are allowed to try again." << endl;
        goto start;
    }else if(sum == 6){
        win6=1;
        cout << "Nice job. You are allowed to try again." << endl;
        goto start;
    }else if(sum == 8){
        win8=1;
        cout << "Nice job. You are allowed to try again." << endl;
        goto start;
    }else if(sum == 9){
        win9=1;
        cout << "Nice job. You are allowed to try again." << endl;
        goto start;
    }else if(sum == 10){
        win10=1;
        cout << "Nice job. You are allowed to try again." << endl;
        goto start;
    }else{
        cout << "What are you doing???" << endl;
        goto start;
    }
}
