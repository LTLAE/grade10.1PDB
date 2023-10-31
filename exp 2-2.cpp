#include <iostream>
#include <math.h>
using namespace std;

double sum=0,input=0;

int cal(int n=2){
    for(int timer=1;timer<=10;timer++){
        sum=sum+pow(n,timer);
    }
}

int main() {
    cout << "Please input n" << endl;
    cin >> input;
    cal(input);
    cout << "Result is " << sum <<endl;
}
