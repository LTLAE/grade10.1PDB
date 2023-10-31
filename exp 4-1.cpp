#include <iostream>
using namespace std;

int win(){
    cout << "You win!" << endl;
}


int main() {

    restart:;
    int input, win4 = 0, win5 = 0, win6 = 0, win8 = 0, win9 = 0, win10 = 0;
    start:;
    cout << "Input your dice result: ";
    cin >> input;

    if(input==7||input==11){
        win();
    }else if(input==4&&win4==1){
        win();
    }else if(input==5&&win5==1){
        win();
    }else if(input==6&&win6==1){
        win();
    }else if(input==8&&win8==1){
        win();
    }else if(input==9&&win9==1){
        win();
    }else if(input==10&&win10==1){
        win();
    }else if(input==2||input==3|input==12){
        cout << "You lose" << endl;
        cout << "Wanna try again?(y/n): " << endl;
        char again;
        cin >> again;   cout << endl;
        if(again=='y')  goto restart;
    }else if(input==4){
        win4=1;
        cout << "Nice job. You are allowed to try again." << endl;
        goto start;
    }else if(input==5){
        win5=1;
        cout << "Nice job. You are allowed to try again." << endl;
        goto start;
    }else if(input==6){
        win6=1;
        cout << "Nice job. You are allowed to try again." << endl;
        goto start;
    }else if(input==8){
        win8=1;
        cout << "Nice job. You are allowed to try again." << endl;
        goto start;
    }else if(input==9){
        win9=1;
        cout << "Nice job. You are allowed to try again." << endl;
        goto start;
    }else if(input==10){
        win10=1;
        cout << "Nice job. You are allowed to try again." << endl;
        goto start;
    }else{
        cout << "What are you doing???" << endl;
        goto start;
    }
}
