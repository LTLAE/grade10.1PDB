#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    int loop=1,input,smart=0; //endless loop
    while(loop=1){
        srand((unsigned)time(NULL));
        for(int guess=rand() % (200+1),count=0;count!=10;count++) {
            cout << "Please input a number between 1-200. You have " << 10 - count << " times left." << endl;
            cout << "Input 114514 to stop." << endl;
            cin >> input;
            if(input==114514) break;
            if(input==guess){
                cout << "Congratulations! You have find out the correct number!" << endl; smart=1; break;
            }else if(input<guess){
                cout << "No! The number is not " << input << "." << " Try a bigger number!" << endl;
            }else if(input>guess){
                cout << "No! The number is not " << input << "." << " Try a smaller number!" << endl;
            }
        }
        if(input==114514) break;
        if(smart==0){
            cout << "--------------------" << endl;
            cout << "You are so stupid." << endl;
        }
        cout << "--------------------" << endl;
        cout << "Starting a new game..." << endl;
    }
    cout << "Stopping..." << endl;
}