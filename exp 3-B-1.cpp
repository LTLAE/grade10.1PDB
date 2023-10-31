#include <iostream>
using namespace std;

int calday(int year,int month,int day){
    int count=0;
    if(year%4==0&&month>2) count+=1;
    count+=day;
    for(month--;month!=0;month--){
        switch(month){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                count+=31;break;
            case 4: case 6: case 9: case 11:
                count+=30;break;
            case 2:
                count+=28;break;
        }
    }
    return count;
}

int main() {
    struct date{int year;int month;int day;}input;

    restart:
    cout << "Please input Year (AD only):";
    cin >> input.year;
    cout << "Please input Month:";
    cin >> input.month;
    cout << "Please input Day:";
    cin >> input.day;

    //test if input is valid
    if(input.year<=0){
        cout << "What are you doing ???" << endl;
        goto restart;
    }

    if(input.month<=0||input.month>12){
        cout << "What are you doing ???" << endl;
        goto restart;
    }

    switch(input.month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (input.day > 31) {
                cout << "What are you doing ???" << endl;
                goto restart;
            }
        case 4: case 6: case 9: case 11:
            if (input.day > 30) {
                cout << "What are you doing ???" << endl;
                goto restart;
            }
        case 2:
            if (input.year % 4 != 0 && input.day > 28) {
                cout << "What are you doing ???" << endl;
                goto restart;
            }
    }
            cout << "The day is "<< calday(input.year,input.month,input.day) << "th(st/nd) day in the year." << endl;

}