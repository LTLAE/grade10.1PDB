#include <iostream>
using namespace std;

int main() {
    int sum1=0,sum2=0,sum3=0,count1=0,count2=0,count3=0,num;

    cout << "Using while to calculate 1+2+...+100=?" << endl;
    num=1; //reset
    while(count1!=100){
        sum1=sum1+num;
        num++;count1++;
    }
    cout << "Result is " << sum1 << endl;

    cout << "Using do-while to calculate 1+2+...+100=?" << endl;
    num=1; //reset
    do{
        sum2=sum2+num;
        num++;count2++;
    }while(count2!=100);
    cout << "Result is " << sum2 << endl;

    cout << "Using for to calculate 1+2+...+100=?" << endl;
    for(num=1;count3!=100;sum3=sum3+num,num++,count3++){}
    cout << "Result is " << sum3 << endl;
}