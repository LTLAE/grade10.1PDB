#include <iostream>
#include <math.h>
using namespace std;

double a,b,c,maxe,mide,mine;

int valid_or_not(){
    start:
    cout << "Please input the length of the first edge: ";
    cin >> a;
    cout << '\r' <<"Please input the length of the second edge: ";
    cin >> b;
    cout << '\r' <<"Please input the length of the third edge: ";
    cin >> c;
    //compare value of edges
    if(a>=b){
        if(a>=c){
            maxe=a;
            if(b>=c){
                mide=b,mine=c;
            }else{
                mide=c,mine=b;
            }
        }else{
            maxe=c,mide=a,mine=b;
        }
    }else if(a>=c){
        maxe=b,mide=a,mine=c;
    }else{
        mine=a;
        if(b>=c){
            maxe=b,mide=c;
        }else{
            maxe=c,mide=b;
        }
    }
    //find out whether the triangle is valid
    if(mide+mine>maxe){
        cout << "The triangle is valid, calculating area." << endl;
    }else{
        cout << "The triangle is not valid, please check your value and input again." << endl;
        goto start;
    }
}
    //One meter long is one meter strong
int calculate_area(){
    cout << "The area of your triangle is: " << sqrt(((a+b+c)/2)*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c)) << endl;
}
    //add foot to a snake
int main() {
    valid_or_not();
    calculate_area();
}